/*
 * ModSecurity, http://www.modsecurity.org/
 * Copyright (c) 2015 Trustwave Holdings, Inc. (http://www.trustwave.com/)
 *
 * You may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * If any of the files related to licensing are missing or if you have any
 * other questions related to licensing please contact Trustwave Holdings, Inc.
 * directly using the email address security@modsecurity.org.
 *
 */

#include <string.h>

#include <ctime>
#include <iostream>
#include <string>
#include <list>

#include "modsecurity/modsecurity.h"
#include "modsecurity/rules.h"

#include "common/modsecurity_test.h"
#include "common/colors.h"
#include "regression/regression_test.h"
#include "common/modsecurity_test_results.h"
#include "regression/custom_debug_log.h"
#include "utils/regex.h"

using modsecurity_test::CustomDebugLog;
using modsecurity_test::ModSecurityTest;
using modsecurity_test::ModSecurityTestResults;
using modsecurity_test::RegressionTest;
using modsecurity_test::RegressionTestResult;

using ModSecurity::Utils::regex_search;
using ModSecurity::Utils::SMatch;
using ModSecurity::Utils::Regex;

std::string default_test_path = "test-cases/regression";

void print_help() {
    std::cout << "Use ./regression-tests /path/to/file" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}


void actions(ModSecurityTestResults<RegressionTest> *r,
    ModSecurity::Assay *a) {
    ModSecurity::ModSecurityIntervention it;
    memset(&it, '\0', sizeof(ModSecurity::ModSecurityIntervention));
    it.status = 200;
    if (a->intervention(&it) == true) {
        if (it.pause != 0) {
            // FIXME:
        }
        if (it.status != 0) {
            r->status = it.status;
        }
        if (it.url != NULL) {
            r->location = it.url;
        }
    }
}

void logCb(void *data, const char *msg) {
    std::stringstream *ss = (std::stringstream *) data;
    *ss << msg << std::endl;
}


void perform_unit_test(std::vector<RegressionTest *> *tests,
    ModSecurityTestResults<RegressionTestResult> *res, int *count) {


    for (RegressionTest *t : *tests) {
        CustomDebugLog *debug_log = new CustomDebugLog();
        ModSecurity::ModSecurity *modsec = NULL;
        ModSecurity::Rules *modsec_rules = NULL;
        ModSecurity::Assay *modsec_assay = NULL;
        ModSecurityTestResults<RegressionTest> r;
        std::stringstream serverLog;
        RegressionTestResult *testRes = new RegressionTestResult();
        testRes->test = t;
        r.status = 200;
        (*count)++;

        size_t offset = t->filename.find_last_of("/\\");
        std::string filename("");
        if (offset != std::string::npos) {
            filename = std::string(t->filename, offset + 1,
                t->filename.length() - offset - 1);
        } else {
            filename = t->filename;
        }
        std::cout << std::setw(3) << std::right <<
            std::to_string(*count) << " ";
        std::cout << std::setw(50) << std::left << filename;
        std::cout << std::setw(70) << std::left << t->name;

        modsec = new ModSecurity::ModSecurity();
        modsec->setConnectorInformation("ModSecurity-regression v0.0.1-alpha" \
            " (ModSecurity regression test utility)");
        modsec->setServerLogCb(logCb);
        modsec_rules = new ModSecurity::Rules(debug_log);

        if (modsec_rules->load(t->rules.c_str(), filename) < 0) {
            if (t->parser_error.empty() == true) {
                testRes->reason << KRED << "parse failed." << RESET << std::endl;
                testRes->reason << modsec_rules->getParserError() << std::endl;
                testRes->passed = false;
                return;
            }

            Regex re(t->parser_error);
            SMatch match;
            std::string s = modsec_rules->getParserError();

            if (regex_search(s, &match, re) && match.size() >= 1) {
                testRes->reason << KGRN << "passed!" << RESET << std::endl;
                testRes->passed = true;
                return;
            } else {
                testRes->reason << KRED << "failed!" << RESET << std::endl;
                testRes->reason << KWHT << "Expected a parser error." \
                    << RESET << std::endl;
                testRes->reason << KWHT << "Expected: " << RESET \
                    << t->parser_error << std::endl;
                testRes->reason << KWHT << "Produced: " << RESET \
                    << s << std::endl;
                testRes->passed = false;
                return;
            }

        } else {
            if (t->parser_error.empty() == false) {
                std::cout << KRED << "failed!" << std::endl;
                std::cout << KWHT << "Expected a parser error." \
                    << RESET << std::endl;
                std::cout << KWHT << "Expected: " << RESET \
                    << t->parser_error << std::endl;
                testRes->passed = false;
            }
        }

        modsec_assay = new ModSecurity::Assay(modsec, modsec_rules,
            &serverLog);

        modsec_assay->processConnection(t->clientIp.c_str(),
            t->clientPort, t->serverIp.c_str(), t->serverPort);

        actions(&r, modsec_assay);
        if (r.status != 200) {
             goto end;
        }

        modsec_assay->processURI(t->uri.c_str(), t->protocol.c_str(),
            t->httpVersion.c_str());

        actions(&r, modsec_assay);
        if (r.status != 200) {
            goto end;
        }

        for (std::pair<std::string, std::string> headers :
            t->request_headers) {
            modsec_assay->addRequestHeader(headers.first.c_str(),
                headers.second.c_str());
        }

        modsec_assay->processRequestHeaders();
        actions(&r, modsec_assay);
        if (r.status != 200) {
            goto end;
        }

        modsec_assay->appendRequestBody(
            (unsigned char *)t->request_body.c_str(),
            t->request_body.size());
        modsec_assay->processRequestBody();
        actions(&r, modsec_assay);
        if (r.status != 200) {
            goto end;
        }

        for (std::pair<std::string, std::string> headers :
            t->response_headers) {
            modsec_assay->addResponseHeader(headers.first.c_str(),
                headers.second.c_str());
        }

        modsec_assay->processResponseHeaders();
        actions(&r, modsec_assay);
        if (r.status != 200) {
            goto end;
        }

        modsec_assay->appendResponseBody(
            (unsigned char *)t->response_body.c_str(),
            t->response_body.size());
        modsec_assay->processResponseBody();
        actions(&r, modsec_assay);
        if (r.status != 200) {
            goto end;
        }

end:
        modsec_assay->processLogging(r.status);

        CustomDebugLog *d = reinterpret_cast<CustomDebugLog *>
            (modsec_rules->m_debugLog);

        if (d != NULL) {
            if (!d->contains(t->debug_log)) {
                std::cout << KRED << "failed!" << RESET << std::endl;
                testRes->reason << "Debug log was not matching the " \
                    << "expected results." << std::endl;
                testRes->reason << KWHT << "Expecting: " << RESET \
                    << t->debug_log + ".";
                testRes->passed = false;
            } else if (r.status != t->http_code) {
                std::cout << KRED << "failed!" << RESET << std::endl;
                testRes->reason << "HTTP code mismatch. expecting: " + \
                    std::to_string(t->http_code) + \
                    " got: " + std::to_string(r.status) + "\n";
                testRes->passed = false;
            } else {
                std::cout << KGRN << "passed!" << RESET << std::endl;
                testRes->passed = true;
                goto after_debug_log;
            }

            if (testRes->passed == false) {
                testRes->reason << std::endl;
                testRes->reason << KWHT << "Debug log:" << RESET << std::endl;
                testRes->reason << d->log_messages() << std::endl;
            }
        }

after_debug_log:
        if (d != NULL) {
            r.log_raw_debug_log = d->log_messages();
        }

        delete modsec_assay;
        delete modsec_rules;
        delete modsec;
        /* delete debug_log; */

        res->push_back(testRes);
    }
}


int main(int argc, char **argv) {
    ModSecurityTest<RegressionTest> test;
    ModSecurityTestResults<RegressionTest> results;

    test.cmd_options(argc, argv);
    std::cout << test.header();

    test.load_tests();

    std::cout << std::setw(4) << std::right << "# ";
    std::cout << std::setw(50) << std::left << "File Name";
    std::cout << std::setw(70) << std::left << "Test Name";
    std::cout << std::setw(10) << std::left << "Passed?";
    std::cout << std::endl;
    std::cout << std::setw(4) << std::right << "--- ";
    std::cout << std::setw(50) << std::left << "---------";
    std::cout << std::setw(70) << std::left << "---------";
    std::cout << std::setw(10) << std::left << "-------";
    std::cout << std::endl;
    int counter = 0;

    std::list<std::string> keyList;
    for (std::pair<std::string, std::vector<RegressionTest *> *> a : test) {
        keyList.push_back(a.first);
    }
    keyList.sort();

    ModSecurityTestResults<RegressionTestResult> res;
    for (std::string &a : keyList) {
        std::vector<RegressionTest *> *tests = test[a];
        perform_unit_test(tests, &res, &counter);
    }

    std::cout << std::endl;

    int passed = 0;
    int failed = 0;
    for (RegressionTestResult *r : res) {
        if (r->passed) { 
            passed++;
        } else {
            std::cout << KRED << "Test failed." << RESET << KWHT << " From: " \
               << RESET << r->test->filename << "." << std::endl;
            std::cout << KWHT << "Test name: " << RESET << r->test->name << "." << std::endl;
            std::cout << KWHT << "Reason: " << RESET << std::endl;
            std::cout << r->reason.str() << std::endl;
            failed++;
        }
    }

    std::cout << "Ran a total of: " << std::to_string(failed + passed) \
        << " regression tests - ";
    if (failed == 0) {
        std::cout << KGRN << "All tests passed" << RESET << std::endl;
    } else {
        std::cout << KRED << failed << " failed." << RESET << std::endl;
    }

    for (std::pair<std::string, std::vector<RegressionTest *> *> a : test) {
        std::vector<RegressionTest *> *vec = a.second;
        for (int i = 0; i < vec->size(); i++) {
            delete vec->at(i);
        }
        delete vec;
    }

    return 0;
}
