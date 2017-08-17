// A Bison parser, made by GNU Bison 3.0.4.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2015 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "seclang-parser.cc" // lalr1.cc:404

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "seclang-parser.hh"

// User implementation prologue.

#line 51 "seclang-parser.cc" // lalr1.cc:412
// Unqualified %code blocks.
#line 348 "seclang-parser.yy" // lalr1.cc:413

#include "src/parser/driver.h"

#line 57 "seclang-parser.cc" // lalr1.cc:413


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyla.clear ())

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 143 "seclang-parser.cc" // lalr1.cc:479

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
  seclang_parser::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
  seclang_parser::seclang_parser (modsecurity::Parser::Driver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

  seclang_parser::~seclang_parser ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/



  // by_state.
  inline
  seclang_parser::by_state::by_state ()
    : state (empty_state)
  {}

  inline
  seclang_parser::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
  seclang_parser::by_state::clear ()
  {
    state = empty_state;
  }

  inline
  void
  seclang_parser::by_state::move (by_state& that)
  {
    state = that.state;
    that.clear ();
  }

  inline
  seclang_parser::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
  seclang_parser::symbol_number_type
  seclang_parser::by_state::type_get () const
  {
    if (state == empty_state)
      return empty_symbol;
    else
      return yystos_[state];
  }

  inline
  seclang_parser::stack_symbol_type::stack_symbol_type ()
  {}


  inline
  seclang_parser::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
      switch (that.type_get ())
    {
      case 94: // "Accuracy"
      case 95: // "Allow"
      case 96: // "Append"
      case 97: // "AuditLog"
      case 98: // "Block"
      case 99: // "Capture"
      case 100: // "Chain"
      case 101: // "ACTION_CTL_AUDIT_ENGINE"
      case 102: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 103: // "ACTION_CTL_BDY_JSON"
      case 104: // "ACTION_CTL_BDY_XML"
      case 105: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 106: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 107: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 108: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 109: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 110: // "Deny"
      case 111: // "DeprecateVar"
      case 112: // "Drop"
      case 113: // "Exec"
      case 114: // "ExpireVar"
      case 115: // "Id"
      case 116: // "InitCol"
      case 117: // "Log"
      case 118: // "LogData"
      case 119: // "Maturity"
      case 120: // "Msg"
      case 121: // "MultiMatch"
      case 122: // "NoAuditLog"
      case 123: // "NoLog"
      case 124: // "Pass"
      case 125: // "Pause"
      case 126: // "Phase"
      case 127: // "Prepend"
      case 128: // "Proxy"
      case 129: // "Redirect"
      case 130: // "Rev"
      case 131: // "SanatiseArg"
      case 132: // "SanatiseMatched"
      case 133: // "SanatiseMatchedBytes"
      case 134: // "SanatiseRequestHeader"
      case 135: // "SanatiseResponseHeader"
      case 136: // "SetEnv"
      case 137: // "SetRsc"
      case 138: // "SetSid"
      case 139: // "SetUID"
      case 140: // "Severity"
      case 141: // "Skip"
      case 142: // "SkipAfter"
      case 143: // "Status"
      case 144: // "Tag"
      case 145: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 146: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 147: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 148: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 149: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 150: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 151: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 152: // "ACTION_TRANSFORMATION_LENGTH"
      case 153: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 154: // "ACTION_TRANSFORMATION_MD5"
      case 155: // "ACTION_TRANSFORMATION_NONE"
      case 156: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 157: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 158: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 159: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 160: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 161: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 162: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 163: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 164: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 165: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 166: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 167: // "ACTION_TRANSFORMATION_SHA1"
      case 168: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 169: // "ACTION_TRANSFORMATION_TRIM"
      case 170: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 171: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 172: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 173: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 174: // "Ver"
      case 175: // "xmlns"
      case 176: // "CONFIG_COMPONENT_SIG"
      case 177: // "CONFIG_DIR_AUDIT_DIR"
      case 178: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 179: // "CONFIG_DIR_AUDIT_ENG"
      case 180: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 181: // "CONFIG_DIR_AUDIT_LOG"
      case 182: // "CONFIG_DIR_AUDIT_LOG2"
      case 183: // "CONFIG_DIR_AUDIT_LOG_P"
      case 184: // "CONFIG_DIR_AUDIT_STS"
      case 185: // "CONFIG_DIR_AUDIT_TPE"
      case 186: // "CONFIG_DIR_DEBUG_LOG"
      case 187: // "CONFIG_DIR_DEBUG_LVL"
      case 188: // "CONFIG_DIR_GEO_DB"
      case 189: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 190: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 191: // "CONFIG_DIR_REQ_BODY"
      case 192: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 193: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 194: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 195: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 196: // "CONFIG_DIR_RES_BODY"
      case 197: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 198: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 199: // "CONFIG_DIR_RULE_ENG"
      case 200: // "CONFIG_DIR_SEC_ACTION"
      case 201: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 202: // "CONFIG_DIR_SEC_MARKER"
      case 203: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 204: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 205: // "CONFIG_SEC_HTTP_BLKEY"
      case 206: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 207: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 208: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 209: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 210: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 211: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 212: // "CONFIG_UPLOAD_DIR"
      case 213: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 214: // "CONFIG_UPLOAD_FILE_MODE"
      case 215: // "CONFIG_VALUE_ABORT"
      case 216: // "CONFIG_VALUE_DETC"
      case 217: // "CONFIG_VALUE_HTTPS"
      case 218: // "CONFIG_VALUE_OFF"
      case 219: // "CONFIG_VALUE_ON"
      case 220: // "CONFIG_VALUE_PARALLEL"
      case 221: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 222: // "CONFIG_VALUE_REJECT"
      case 223: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 224: // "CONFIG_VALUE_SERIAL"
      case 225: // "CONFIG_VALUE_WARN"
      case 226: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 227: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 228: // "CONGIG_DIR_SEC_ARG_SEP"
      case 229: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 230: // "CONGIG_DIR_SEC_DATA_DIR"
      case 231: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 232: // "CONGIG_DIR_SEC_TMP_DIR"
      case 233: // "DIRECTIVE"
      case 234: // "DIRECTIVE_SECRULESCRIPT"
      case 235: // "FREE_TEXT"
      case 236: // "OPERATOR"
      case 237: // "OPERATOR_BEGINS_WITH"
      case 238: // "OPERATOR_CONTAINS"
      case 239: // "OPERATOR_CONTAINS_WORD"
      case 240: // "OPERATOR_DETECT_SQLI"
      case 241: // "OPERATOR_DETECT_XSS"
      case 242: // "OPERATOR_ENDS_WITH"
      case 243: // "OPERATOR_EQ"
      case 244: // "OPERATOR_FUZZY_HASH"
      case 245: // "OPERATOR_GE"
      case 246: // "OPERATOR_GEOLOOKUP"
      case 247: // "OPERATOR_GSB_LOOKUP"
      case 248: // "OPERATOR_GT"
      case 249: // "OPERATOR_INSPECT_FILE"
      case 250: // "OPERATOR_IP_MATCH"
      case 251: // "OPERATOR_IP_MATCH_FROM_FILE"
      case 252: // "OPERATOR_LE"
      case 253: // "OPERATOR_LT"
      case 254: // "OPERATOR_PM"
      case 255: // "OPERATOR_PM_FROM_FILE"
      case 256: // "OPERATOR_RBL"
      case 257: // "OPERATOR_RSUB"
      case 258: // "OPERATOR_RX"
      case 259: // "Operator RX (content only)"
      case 260: // "OPERATOR_STR_EQ"
      case 261: // "OPERATOR_STR_MATCH"
      case 262: // "OPERATOR_UNCONDITIONAL_MATCH"
      case 263: // "OPERATOR_VALIDATE_BYTE_RANGE"
      case 264: // "OPERATOR_VALIDATE_DTD"
      case 265: // "OPERATOR_VALIDATE_HASH"
      case 266: // "OPERATOR_VALIDATE_SCHEMA"
      case 267: // "OPERATOR_VALIDATE_URL_ENCODING"
      case 268: // "OPERATOR_VALIDATE_UTF8_ENCODING"
      case 269: // "OPERATOR_VERIFY_CC"
      case 270: // "OPERATOR_VERIFY_CPF"
      case 271: // "OPERATOR_VERIFY_SSN"
      case 272: // "OPERATOR_WITHIN"
      case 273: // "OP_QUOTE"
      case 274: // "QUOTATION_MARK"
      case 275: // "RUN_TIME_VAR_BLD"
      case 276: // "RUN_TIME_VAR_DUR"
      case 277: // "RUN_TIME_VAR_HSV"
      case 278: // "RUN_TIME_VAR_REMOTE_USER"
      case 279: // "RUN_TIME_VAR_TIME"
      case 280: // "RUN_TIME_VAR_TIME_DAY"
      case 281: // "RUN_TIME_VAR_TIME_EPOCH"
      case 282: // "RUN_TIME_VAR_TIME_HOUR"
      case 283: // "RUN_TIME_VAR_TIME_MIN"
      case 284: // "RUN_TIME_VAR_TIME_MON"
      case 285: // "RUN_TIME_VAR_TIME_SEC"
      case 286: // "RUN_TIME_VAR_TIME_WDAY"
      case 287: // "RUN_TIME_VAR_TIME_YEAR"
      case 288: // "SETVAR_VARIABLE_PART"
      case 289: // "SETVAR_CONTENT_PART"
      case 290: // "VARIABLE"
      case 291: // "Dictionary element"
      case 292: // "Dictionary element, selected by regexp"
      case 307: // setvar_variable
      case 308: // setvar_content
        value.move< std::string > (that.value);
        break;

      case 299: // op
      case 300: // op_before_init
        value.move< std::unique_ptr<Operator> > (that.value);
        break;

      case 304: // var
        value.move< std::unique_ptr<Variable> > (that.value);
        break;

      case 305: // act
      case 306: // setvar_action
        value.move< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 302: // variables
      case 303: // variables_may_be_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 297: // actions
      case 298: // actions_may_quoted
        value.move< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    // that is emptied.
    that.type = empty_symbol;
  }

  inline
  seclang_parser::stack_symbol_type&
  seclang_parser::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
      switch (that.type_get ())
    {
      case 94: // "Accuracy"
      case 95: // "Allow"
      case 96: // "Append"
      case 97: // "AuditLog"
      case 98: // "Block"
      case 99: // "Capture"
      case 100: // "Chain"
      case 101: // "ACTION_CTL_AUDIT_ENGINE"
      case 102: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 103: // "ACTION_CTL_BDY_JSON"
      case 104: // "ACTION_CTL_BDY_XML"
      case 105: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 106: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 107: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 108: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 109: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 110: // "Deny"
      case 111: // "DeprecateVar"
      case 112: // "Drop"
      case 113: // "Exec"
      case 114: // "ExpireVar"
      case 115: // "Id"
      case 116: // "InitCol"
      case 117: // "Log"
      case 118: // "LogData"
      case 119: // "Maturity"
      case 120: // "Msg"
      case 121: // "MultiMatch"
      case 122: // "NoAuditLog"
      case 123: // "NoLog"
      case 124: // "Pass"
      case 125: // "Pause"
      case 126: // "Phase"
      case 127: // "Prepend"
      case 128: // "Proxy"
      case 129: // "Redirect"
      case 130: // "Rev"
      case 131: // "SanatiseArg"
      case 132: // "SanatiseMatched"
      case 133: // "SanatiseMatchedBytes"
      case 134: // "SanatiseRequestHeader"
      case 135: // "SanatiseResponseHeader"
      case 136: // "SetEnv"
      case 137: // "SetRsc"
      case 138: // "SetSid"
      case 139: // "SetUID"
      case 140: // "Severity"
      case 141: // "Skip"
      case 142: // "SkipAfter"
      case 143: // "Status"
      case 144: // "Tag"
      case 145: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 146: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 147: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 148: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 149: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 150: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 151: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 152: // "ACTION_TRANSFORMATION_LENGTH"
      case 153: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 154: // "ACTION_TRANSFORMATION_MD5"
      case 155: // "ACTION_TRANSFORMATION_NONE"
      case 156: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 157: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 158: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 159: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 160: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 161: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 162: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 163: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 164: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 165: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 166: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 167: // "ACTION_TRANSFORMATION_SHA1"
      case 168: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 169: // "ACTION_TRANSFORMATION_TRIM"
      case 170: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 171: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 172: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 173: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 174: // "Ver"
      case 175: // "xmlns"
      case 176: // "CONFIG_COMPONENT_SIG"
      case 177: // "CONFIG_DIR_AUDIT_DIR"
      case 178: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 179: // "CONFIG_DIR_AUDIT_ENG"
      case 180: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 181: // "CONFIG_DIR_AUDIT_LOG"
      case 182: // "CONFIG_DIR_AUDIT_LOG2"
      case 183: // "CONFIG_DIR_AUDIT_LOG_P"
      case 184: // "CONFIG_DIR_AUDIT_STS"
      case 185: // "CONFIG_DIR_AUDIT_TPE"
      case 186: // "CONFIG_DIR_DEBUG_LOG"
      case 187: // "CONFIG_DIR_DEBUG_LVL"
      case 188: // "CONFIG_DIR_GEO_DB"
      case 189: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 190: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 191: // "CONFIG_DIR_REQ_BODY"
      case 192: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 193: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 194: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 195: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 196: // "CONFIG_DIR_RES_BODY"
      case 197: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 198: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 199: // "CONFIG_DIR_RULE_ENG"
      case 200: // "CONFIG_DIR_SEC_ACTION"
      case 201: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 202: // "CONFIG_DIR_SEC_MARKER"
      case 203: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 204: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 205: // "CONFIG_SEC_HTTP_BLKEY"
      case 206: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 207: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 208: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 209: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 210: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 211: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 212: // "CONFIG_UPLOAD_DIR"
      case 213: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 214: // "CONFIG_UPLOAD_FILE_MODE"
      case 215: // "CONFIG_VALUE_ABORT"
      case 216: // "CONFIG_VALUE_DETC"
      case 217: // "CONFIG_VALUE_HTTPS"
      case 218: // "CONFIG_VALUE_OFF"
      case 219: // "CONFIG_VALUE_ON"
      case 220: // "CONFIG_VALUE_PARALLEL"
      case 221: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 222: // "CONFIG_VALUE_REJECT"
      case 223: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 224: // "CONFIG_VALUE_SERIAL"
      case 225: // "CONFIG_VALUE_WARN"
      case 226: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 227: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 228: // "CONGIG_DIR_SEC_ARG_SEP"
      case 229: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 230: // "CONGIG_DIR_SEC_DATA_DIR"
      case 231: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 232: // "CONGIG_DIR_SEC_TMP_DIR"
      case 233: // "DIRECTIVE"
      case 234: // "DIRECTIVE_SECRULESCRIPT"
      case 235: // "FREE_TEXT"
      case 236: // "OPERATOR"
      case 237: // "OPERATOR_BEGINS_WITH"
      case 238: // "OPERATOR_CONTAINS"
      case 239: // "OPERATOR_CONTAINS_WORD"
      case 240: // "OPERATOR_DETECT_SQLI"
      case 241: // "OPERATOR_DETECT_XSS"
      case 242: // "OPERATOR_ENDS_WITH"
      case 243: // "OPERATOR_EQ"
      case 244: // "OPERATOR_FUZZY_HASH"
      case 245: // "OPERATOR_GE"
      case 246: // "OPERATOR_GEOLOOKUP"
      case 247: // "OPERATOR_GSB_LOOKUP"
      case 248: // "OPERATOR_GT"
      case 249: // "OPERATOR_INSPECT_FILE"
      case 250: // "OPERATOR_IP_MATCH"
      case 251: // "OPERATOR_IP_MATCH_FROM_FILE"
      case 252: // "OPERATOR_LE"
      case 253: // "OPERATOR_LT"
      case 254: // "OPERATOR_PM"
      case 255: // "OPERATOR_PM_FROM_FILE"
      case 256: // "OPERATOR_RBL"
      case 257: // "OPERATOR_RSUB"
      case 258: // "OPERATOR_RX"
      case 259: // "Operator RX (content only)"
      case 260: // "OPERATOR_STR_EQ"
      case 261: // "OPERATOR_STR_MATCH"
      case 262: // "OPERATOR_UNCONDITIONAL_MATCH"
      case 263: // "OPERATOR_VALIDATE_BYTE_RANGE"
      case 264: // "OPERATOR_VALIDATE_DTD"
      case 265: // "OPERATOR_VALIDATE_HASH"
      case 266: // "OPERATOR_VALIDATE_SCHEMA"
      case 267: // "OPERATOR_VALIDATE_URL_ENCODING"
      case 268: // "OPERATOR_VALIDATE_UTF8_ENCODING"
      case 269: // "OPERATOR_VERIFY_CC"
      case 270: // "OPERATOR_VERIFY_CPF"
      case 271: // "OPERATOR_VERIFY_SSN"
      case 272: // "OPERATOR_WITHIN"
      case 273: // "OP_QUOTE"
      case 274: // "QUOTATION_MARK"
      case 275: // "RUN_TIME_VAR_BLD"
      case 276: // "RUN_TIME_VAR_DUR"
      case 277: // "RUN_TIME_VAR_HSV"
      case 278: // "RUN_TIME_VAR_REMOTE_USER"
      case 279: // "RUN_TIME_VAR_TIME"
      case 280: // "RUN_TIME_VAR_TIME_DAY"
      case 281: // "RUN_TIME_VAR_TIME_EPOCH"
      case 282: // "RUN_TIME_VAR_TIME_HOUR"
      case 283: // "RUN_TIME_VAR_TIME_MIN"
      case 284: // "RUN_TIME_VAR_TIME_MON"
      case 285: // "RUN_TIME_VAR_TIME_SEC"
      case 286: // "RUN_TIME_VAR_TIME_WDAY"
      case 287: // "RUN_TIME_VAR_TIME_YEAR"
      case 288: // "SETVAR_VARIABLE_PART"
      case 289: // "SETVAR_CONTENT_PART"
      case 290: // "VARIABLE"
      case 291: // "Dictionary element"
      case 292: // "Dictionary element, selected by regexp"
      case 307: // setvar_variable
      case 308: // setvar_content
        value.copy< std::string > (that.value);
        break;

      case 299: // op
      case 300: // op_before_init
        value.copy< std::unique_ptr<Operator> > (that.value);
        break;

      case 304: // var
        value.copy< std::unique_ptr<Variable> > (that.value);
        break;

      case 305: // act
      case 306: // setvar_action
        value.copy< std::unique_ptr<actions::Action> > (that.value);
        break;

      case 302: // variables
      case 303: // variables_may_be_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > (that.value);
        break;

      case 297: // actions
      case 298: // actions_may_quoted
        value.copy< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > (that.value);
        break;

      default:
        break;
    }

    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
  seclang_parser::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);
  }

#if YYDEBUG
  template <typename Base>
  void
  seclang_parser::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    // Avoid a (spurious) G++ 4.8 warning about "array subscript is
    // below array bounds".
    if (yysym.empty ())
      std::abort ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    YYUSE (yytype);
    yyo << ')';
  }
#endif

  inline
  void
  seclang_parser::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
  seclang_parser::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
  seclang_parser::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
  seclang_parser::debug_stream () const
  {
    return *yycdebug_;
  }

  void
  seclang_parser::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


  seclang_parser::debug_level_type
  seclang_parser::debug_level () const
  {
    return yydebug_;
  }

  void
  seclang_parser::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline seclang_parser::state_type
  seclang_parser::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
  seclang_parser::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
  seclang_parser::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
  seclang_parser::parse ()
  {
    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 341 "seclang-parser.yy" // lalr1.cc:741
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 873 "seclang-parser.cc" // lalr1.cc:741

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyla.empty ())
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            symbol_type yylookahead (yylex (driver));
            yyla.move (yylookahead);
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* Variants are always initialized to an empty instance of the
         correct type. The default '$$ = $1' action is NOT applied
         when using variants.  */
        switch (yyr1_[yyn])
    {
      case 94: // "Accuracy"
      case 95: // "Allow"
      case 96: // "Append"
      case 97: // "AuditLog"
      case 98: // "Block"
      case 99: // "Capture"
      case 100: // "Chain"
      case 101: // "ACTION_CTL_AUDIT_ENGINE"
      case 102: // "ACTION_CTL_AUDIT_LOG_PARTS"
      case 103: // "ACTION_CTL_BDY_JSON"
      case 104: // "ACTION_CTL_BDY_XML"
      case 105: // "ACTION_CTL_FORCE_REQ_BODY_VAR"
      case 106: // "ACTION_CTL_REQUEST_BODY_ACCESS"
      case 107: // "ACTION_CTL_RULE_REMOVE_BY_ID"
      case 108: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_ID"
      case 109: // "ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG"
      case 110: // "Deny"
      case 111: // "DeprecateVar"
      case 112: // "Drop"
      case 113: // "Exec"
      case 114: // "ExpireVar"
      case 115: // "Id"
      case 116: // "InitCol"
      case 117: // "Log"
      case 118: // "LogData"
      case 119: // "Maturity"
      case 120: // "Msg"
      case 121: // "MultiMatch"
      case 122: // "NoAuditLog"
      case 123: // "NoLog"
      case 124: // "Pass"
      case 125: // "Pause"
      case 126: // "Phase"
      case 127: // "Prepend"
      case 128: // "Proxy"
      case 129: // "Redirect"
      case 130: // "Rev"
      case 131: // "SanatiseArg"
      case 132: // "SanatiseMatched"
      case 133: // "SanatiseMatchedBytes"
      case 134: // "SanatiseRequestHeader"
      case 135: // "SanatiseResponseHeader"
      case 136: // "SetEnv"
      case 137: // "SetRsc"
      case 138: // "SetSid"
      case 139: // "SetUID"
      case 140: // "Severity"
      case 141: // "Skip"
      case 142: // "SkipAfter"
      case 143: // "Status"
      case 144: // "Tag"
      case 145: // "ACTION_TRANSFORMATION_CMD_LINE"
      case 146: // "ACTION_TRANSFORMATION_COMPRESS_WHITESPACE"
      case 147: // "ACTION_TRANSFORMATION_CSS_DECODE"
      case 148: // "ACTION_TRANSFORMATION_HEX_ENCODE"
      case 149: // "ACTION_TRANSFORMATION_HEX_DECODE"
      case 150: // "ACTION_TRANSFORMATION_HTML_ENTITY_DECODE"
      case 151: // "ACTION_TRANSFORMATION_JS_DECODE"
      case 152: // "ACTION_TRANSFORMATION_LENGTH"
      case 153: // "ACTION_TRANSFORMATION_LOWERCASE"
      case 154: // "ACTION_TRANSFORMATION_MD5"
      case 155: // "ACTION_TRANSFORMATION_NONE"
      case 156: // "ACTION_TRANSFORMATION_NORMALISE_PATH"
      case 157: // "ACTION_TRANSFORMATION_NORMALISE_PATH_WIN"
      case 158: // "ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT"
      case 159: // "ACTION_TRANSFORMATION_PARITY_ODD_7_BIT"
      case 160: // "ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT"
      case 161: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS"
      case 162: // "ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR"
      case 163: // "ACTION_TRANSFORMATION_REMOVE_NULLS"
      case 164: // "ACTION_TRANSFORMATION_REMOVE_WHITESPACE"
      case 165: // "ACTION_TRANSFORMATION_REPLACE_COMMENTS"
      case 166: // "ACTION_TRANSFORMATION_REPLACE_NULLS"
      case 167: // "ACTION_TRANSFORMATION_SHA1"
      case 168: // "ACTION_TRANSFORMATION_SQL_HEX_DECODE"
      case 169: // "ACTION_TRANSFORMATION_TRIM"
      case 170: // "ACTION_TRANSFORMATION_UPPERCASE"
      case 171: // "ACTION_TRANSFORMATION_URL_DECODE"
      case 172: // "ACTION_TRANSFORMATION_URL_DECODE_UNI"
      case 173: // "ACTION_TRANSFORMATION_UTF8_TO_UNICODE"
      case 174: // "Ver"
      case 175: // "xmlns"
      case 176: // "CONFIG_COMPONENT_SIG"
      case 177: // "CONFIG_DIR_AUDIT_DIR"
      case 178: // "CONFIG_DIR_AUDIT_DIR_MOD"
      case 179: // "CONFIG_DIR_AUDIT_ENG"
      case 180: // "CONFIG_DIR_AUDIT_FLE_MOD"
      case 181: // "CONFIG_DIR_AUDIT_LOG"
      case 182: // "CONFIG_DIR_AUDIT_LOG2"
      case 183: // "CONFIG_DIR_AUDIT_LOG_P"
      case 184: // "CONFIG_DIR_AUDIT_STS"
      case 185: // "CONFIG_DIR_AUDIT_TPE"
      case 186: // "CONFIG_DIR_DEBUG_LOG"
      case 187: // "CONFIG_DIR_DEBUG_LVL"
      case 188: // "CONFIG_DIR_GEO_DB"
      case 189: // "CONFIG_DIR_PCRE_MATCH_LIMIT"
      case 190: // "CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION"
      case 191: // "CONFIG_DIR_REQ_BODY"
      case 192: // "CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT"
      case 193: // "CONFIG_DIR_REQ_BODY_LIMIT"
      case 194: // "CONFIG_DIR_REQ_BODY_LIMIT_ACTION"
      case 195: // "CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT"
      case 196: // "CONFIG_DIR_RES_BODY"
      case 197: // "CONFIG_DIR_RES_BODY_LIMIT"
      case 198: // "CONFIG_DIR_RES_BODY_LIMIT_ACTION"
      case 199: // "CONFIG_DIR_RULE_ENG"
      case 200: // "CONFIG_DIR_SEC_ACTION"
      case 201: // "CONFIG_DIR_SEC_DEFAULT_ACTION"
      case 202: // "CONFIG_DIR_SEC_MARKER"
      case 203: // "CONFIG_DIR_UNICODE_MAP_FILE"
      case 204: // "CONFIG_SEC_COLLECTION_TIMEOUT"
      case 205: // "CONFIG_SEC_HTTP_BLKEY"
      case 206: // "CONFIG_SEC_REMOTE_RULES_FAIL_ACTION"
      case 207: // "CONFIG_SEC_RULE_REMOVE_BY_ID"
      case 208: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG"
      case 209: // "CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID"
      case 210: // "CONFIG_UPDLOAD_KEEP_FILES"
      case 211: // "CONFIG_UPDLOAD_SAVE_TMP_FILES"
      case 212: // "CONFIG_UPLOAD_DIR"
      case 213: // "CONFIG_UPLOAD_FILE_LIMIT"
      case 214: // "CONFIG_UPLOAD_FILE_MODE"
      case 215: // "CONFIG_VALUE_ABORT"
      case 216: // "CONFIG_VALUE_DETC"
      case 217: // "CONFIG_VALUE_HTTPS"
      case 218: // "CONFIG_VALUE_OFF"
      case 219: // "CONFIG_VALUE_ON"
      case 220: // "CONFIG_VALUE_PARALLEL"
      case 221: // "CONFIG_VALUE_PROCESS_PARTIAL"
      case 222: // "CONFIG_VALUE_REJECT"
      case 223: // "CONFIG_VALUE_RELEVANT_ONLY"
      case 224: // "CONFIG_VALUE_SERIAL"
      case 225: // "CONFIG_VALUE_WARN"
      case 226: // "CONFIG_XML_EXTERNAL_ENTITY"
      case 227: // "CONGIG_DIR_RESPONSE_BODY_MP"
      case 228: // "CONGIG_DIR_SEC_ARG_SEP"
      case 229: // "CONGIG_DIR_SEC_COOKIE_FORMAT"
      case 230: // "CONGIG_DIR_SEC_DATA_DIR"
      case 231: // "CONGIG_DIR_SEC_STATUS_ENGINE"
      case 232: // "CONGIG_DIR_SEC_TMP_DIR"
      case 233: // "DIRECTIVE"
      case 234: // "DIRECTIVE_SECRULESCRIPT"
      case 235: // "FREE_TEXT"
      case 236: // "OPERATOR"
      case 237: // "OPERATOR_BEGINS_WITH"
      case 238: // "OPERATOR_CONTAINS"
      case 239: // "OPERATOR_CONTAINS_WORD"
      case 240: // "OPERATOR_DETECT_SQLI"
      case 241: // "OPERATOR_DETECT_XSS"
      case 242: // "OPERATOR_ENDS_WITH"
      case 243: // "OPERATOR_EQ"
      case 244: // "OPERATOR_FUZZY_HASH"
      case 245: // "OPERATOR_GE"
      case 246: // "OPERATOR_GEOLOOKUP"
      case 247: // "OPERATOR_GSB_LOOKUP"
      case 248: // "OPERATOR_GT"
      case 249: // "OPERATOR_INSPECT_FILE"
      case 250: // "OPERATOR_IP_MATCH"
      case 251: // "OPERATOR_IP_MATCH_FROM_FILE"
      case 252: // "OPERATOR_LE"
      case 253: // "OPERATOR_LT"
      case 254: // "OPERATOR_PM"
      case 255: // "OPERATOR_PM_FROM_FILE"
      case 256: // "OPERATOR_RBL"
      case 257: // "OPERATOR_RSUB"
      case 258: // "OPERATOR_RX"
      case 259: // "Operator RX (content only)"
      case 260: // "OPERATOR_STR_EQ"
      case 261: // "OPERATOR_STR_MATCH"
      case 262: // "OPERATOR_UNCONDITIONAL_MATCH"
      case 263: // "OPERATOR_VALIDATE_BYTE_RANGE"
      case 264: // "OPERATOR_VALIDATE_DTD"
      case 265: // "OPERATOR_VALIDATE_HASH"
      case 266: // "OPERATOR_VALIDATE_SCHEMA"
      case 267: // "OPERATOR_VALIDATE_URL_ENCODING"
      case 268: // "OPERATOR_VALIDATE_UTF8_ENCODING"
      case 269: // "OPERATOR_VERIFY_CC"
      case 270: // "OPERATOR_VERIFY_CPF"
      case 271: // "OPERATOR_VERIFY_SSN"
      case 272: // "OPERATOR_WITHIN"
      case 273: // "OP_QUOTE"
      case 274: // "QUOTATION_MARK"
      case 275: // "RUN_TIME_VAR_BLD"
      case 276: // "RUN_TIME_VAR_DUR"
      case 277: // "RUN_TIME_VAR_HSV"
      case 278: // "RUN_TIME_VAR_REMOTE_USER"
      case 279: // "RUN_TIME_VAR_TIME"
      case 280: // "RUN_TIME_VAR_TIME_DAY"
      case 281: // "RUN_TIME_VAR_TIME_EPOCH"
      case 282: // "RUN_TIME_VAR_TIME_HOUR"
      case 283: // "RUN_TIME_VAR_TIME_MIN"
      case 284: // "RUN_TIME_VAR_TIME_MON"
      case 285: // "RUN_TIME_VAR_TIME_SEC"
      case 286: // "RUN_TIME_VAR_TIME_WDAY"
      case 287: // "RUN_TIME_VAR_TIME_YEAR"
      case 288: // "SETVAR_VARIABLE_PART"
      case 289: // "SETVAR_CONTENT_PART"
      case 290: // "VARIABLE"
      case 291: // "Dictionary element"
      case 292: // "Dictionary element, selected by regexp"
      case 307: // setvar_variable
      case 308: // setvar_content
        yylhs.value.build< std::string > ();
        break;

      case 299: // op
      case 300: // op_before_init
        yylhs.value.build< std::unique_ptr<Operator> > ();
        break;

      case 304: // var
        yylhs.value.build< std::unique_ptr<Variable> > ();
        break;

      case 305: // act
      case 306: // setvar_action
        yylhs.value.build< std::unique_ptr<actions::Action> > ();
        break;

      case 302: // variables
      case 303: // variables_may_be_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ();
        break;

      case 297: // actions
      case 298: // actions_may_quoted
        yylhs.value.build< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ();
        break;

      default:
        break;
    }


      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 2:
#line 680 "seclang-parser.yy" // lalr1.cc:859
    {
        return 0;
      }
#line 1213 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 6:
#line 693 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDirMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1221 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 7:
#line 699 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStorageDir(yystack_[0].value.as< std::string > ());
      }
#line 1229 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 8:
#line 705 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::RelevantOnlyAuditLogStatus);
      }
#line 1237 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 9:
#line 709 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OffAuditLogStatus);
      }
#line 1245 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 10:
#line 713 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setStatus(modsecurity::audit_log::AuditLog::OnAuditLogStatus);
      }
#line 1253 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 11:
#line 719 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFileMode(strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8));
      }
#line 1261 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 12:
#line 725 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath2(yystack_[0].value.as< std::string > ());
      }
#line 1269 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 13:
#line 731 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setParts(yystack_[0].value.as< std::string > ());
      }
#line 1277 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 14:
#line 737 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setFilePath1(yystack_[0].value.as< std::string > ());
      }
#line 1285 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 15:
#line 743 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string relevant_status(yystack_[0].value.as< std::string > ());
        relevant_status.pop_back();
        relevant_status.erase(0, 1);
        driver.m_auditLog->setRelevantStatus(relevant_status);
      }
#line 1296 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 16:
#line 752 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::SerialAuditLogType);
      }
#line 1304 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 17:
#line 756 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::ParallelAuditLogType);
      }
#line 1312 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 18:
#line 760 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_auditLog->setType(modsecurity::audit_log::AuditLog::HttpsAuditLogType);
      }
#line 1320 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 19:
#line 766 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1328 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 20:
#line 770 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadKeepFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1336 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 21:
#line 774 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileLimit.m_set = true;
        driver.m_uploadFileLimit.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 10);
      }
#line 1345 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 22:
#line 779 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadFileMode.m_set = true;
        driver.m_uploadFileMode.m_value = strtol(yystack_[0].value.as< std::string > ().c_str(), NULL, 8);
      }
#line 1354 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 23:
#line 784 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_uploadDirectory.m_set = true;
        driver.m_uploadDirectory.m_value = yystack_[0].value.as< std::string > ();
      }
#line 1363 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 24:
#line 789 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1371 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 25:
#line 793 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_tmpSaveUploadedFiles = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1379 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 26:
#line 800 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1387 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 27:
#line 804 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1395 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 28:
#line 811 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[3].location)
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ());
      }
#line 1405 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 29:
#line 817 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<actions::Action>>> b(new std::vector<std::unique_ptr<actions::Action>>());
        ACTION_INIT(yystack_[0].value.as< std::unique_ptr<actions::Action> > (), yystack_[1].location)
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > () = std::move(b);
      }
#line 1416 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 30:
#line 827 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1429 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 31:
#line 836 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<Operator> > () = std::move(yystack_[0].value.as< std::unique_ptr<Operator> > ());
        yylhs.value.as< std::unique_ptr<Operator> > ()->m_negation = true;
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1443 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 32:
#line 846 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ())));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[1].location, error);
            YYERROR;
        }
      }
#line 1456 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 33:
#line 855 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx("Rx", utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ()), true));
        std::string error;
        if (yylhs.value.as< std::unique_ptr<Operator> > ()->init(driver.ref.back(), &error) == false) {
            driver.error(yystack_[2].location, error);
            YYERROR;
        }
      }
#line 1469 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 34:
#line 867 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::UnconditionalMatch());
      }
#line 1477 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 35:
#line 871 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectSQLi());
      }
#line 1485 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 36:
#line 875 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::DetectXSS());
      }
#line 1493 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 37:
#line 879 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUrlEncoding());
      }
#line 1501 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 38:
#line 883 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateUtf8Encoding());
      }
#line 1509 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 39:
#line 887 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::InspectFile($1); */
        OPERATOR_NOT_SUPPORTED("InspectFile", yystack_[2].location);
      }
#line 1518 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 40:
#line 892 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::FuzzyHash(); */
        OPERATOR_NOT_SUPPORTED("FuzzyHash", yystack_[2].location);
      }
#line 1527 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 41:
#line 897 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateByteRange(yystack_[0].value.as< std::string > ()));
      }
#line 1535 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 42:
#line 901 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateDTD(yystack_[0].value.as< std::string > ()));
      }
#line 1543 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 43:
#line 905 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::ValidateHash($1); */
        OPERATOR_NOT_SUPPORTED("ValidateHash", yystack_[2].location);
      }
#line 1552 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 44:
#line 910 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ValidateSchema(yystack_[0].value.as< std::string > ()));
      }
#line 1560 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 45:
#line 914 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::VerifyCC(yystack_[0].value.as< std::string > ()));
      }
#line 1568 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 46:
#line 918 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::VerifyCPF($1); */
        OPERATOR_NOT_SUPPORTED("VerifyCPF", yystack_[2].location);
      }
#line 1577 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 47:
#line 923 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::VerifySSN($1); */
        OPERATOR_NOT_SUPPORTED("VerifySSN", yystack_[2].location);
      }
#line 1586 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 48:
#line 928 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::GsbLookup($1); */
        OPERATOR_NOT_SUPPORTED("GsbLookup", yystack_[2].location);
      }
#line 1595 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 49:
#line 933 "seclang-parser.yy" // lalr1.cc:859
    {
        /* $$ = new operators::Rsub($1); */
        OPERATOR_NOT_SUPPORTED("Rsub", yystack_[2].location);
      }
#line 1604 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 50:
#line 938 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Within(yystack_[0].value.as< std::string > ()));
      }
#line 1612 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 51:
#line 942 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::ContainsWord(yystack_[0].value.as< std::string > ()));
      }
#line 1620 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 52:
#line 946 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Contains(yystack_[0].value.as< std::string > ()));
      }
#line 1628 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 53:
#line 950 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::EndsWith(yystack_[0].value.as< std::string > ()));
      }
#line 1636 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 54:
#line 954 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Eq(yystack_[0].value.as< std::string > ()));
      }
#line 1644 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 55:
#line 958 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Ge(yystack_[0].value.as< std::string > ()));
      }
#line 1652 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 56:
#line 962 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Gt(yystack_[0].value.as< std::string > ()));
      }
#line 1660 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 57:
#line 966 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatchF(yystack_[0].value.as< std::string > ()));
      }
#line 1668 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 58:
#line 970 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::IpMatch(yystack_[0].value.as< std::string > ()));
      }
#line 1676 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 59:
#line 974 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Le(yystack_[0].value.as< std::string > ()));
      }
#line 1684 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 60:
#line 978 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Lt(yystack_[0].value.as< std::string > ()));
      }
#line 1692 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 61:
#line 982 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::PmFromFile(yystack_[0].value.as< std::string > ()));
      }
#line 1700 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 62:
#line 986 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Pm(yystack_[0].value.as< std::string > ()));
      }
#line 1708 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 63:
#line 990 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rbl(yystack_[0].value.as< std::string > ()));
      }
#line 1716 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 64:
#line 994 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::Rx(yystack_[0].value.as< std::string > ()));
      }
#line 1724 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 65:
#line 998 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrEq(yystack_[0].value.as< std::string > ()));
      }
#line 1732 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 66:
#line 1002 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::StrMatch(yystack_[0].value.as< std::string > ()));
      }
#line 1740 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 67:
#line 1006 "seclang-parser.yy" // lalr1.cc:859
    {
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::BeginsWith(yystack_[0].value.as< std::string > ()));
      }
#line 1748 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 68:
#line 1010 "seclang-parser.yy" // lalr1.cc:859
    {
#ifdef WITH_GEOIP
        OPERATOR_CONTAINER(yylhs.value.as< std::unique_ptr<Operator> > (), new operators::GeoLookup());
#else
        std::stringstream ss;
            ss << "This version of ModSecurity was not compiled with GeoIP support.";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
#endif  // WITH_GEOIP
      }
#line 1763 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 70:
#line 1025 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        std::vector<Variable *> *v = new std::vector<Variable *>();
        for (auto &i : *yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Operator *op = yystack_[1].value.as< std::unique_ptr<Operator> > ().release();
        Rule *rule = new Rule(
            /* op */ op,
            /* variables */ v,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[4].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 1791 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 71:
#line 1049 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<Variable *> *v = new std::vector<Variable *>();
        for (auto &i : *yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ().get()) {
            v->push_back(i.release());
        }

        Rule *rule = new Rule(
            /* op */ yystack_[0].value.as< std::unique_ptr<Operator> > ().release(),
            /* variables */ v,
            /* actions */ NULL,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[3].location.end.line
            );
        if (driver.addSecRule(rule) == false) {
            delete rule;
            YYERROR;
        }
      }
#line 1814 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 72:
#line 1068 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *a = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            a->push_back(i.release());
        }
        Rule *rule = new Rule(
            /* op */ NULL,
            /* variables */ NULL,
            /* actions */ a,
            /* file name */ driver.ref.back(),
            /* line number */ yystack_[2].location.end.line
            );
        driver.addSecAction(rule);
      }
#line 1833 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 73:
#line 1083 "seclang-parser.yy" // lalr1.cc:859
    {
        /*

        TODO: implement the SecRuleScript directive

        */
      }
#line 1845 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 74:
#line 1091 "seclang-parser.yy" // lalr1.cc:859
    {
        std::vector<actions::Action *> *actions = new std::vector<actions::Action *>();
        for (auto &i : *yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<actions::Action> > >  > ().get()) {
            actions->push_back(i.release());
        }
        std::vector<actions::Action *> checkedActions;
        int definedPhase = -1;
        int secRuleDefinedPhase = -1;
        for (actions::Action *a : *actions) {
            actions::Phase *phase = dynamic_cast<actions::Phase *>(a);
            if (phase != NULL) {
                definedPhase = phase->m_phase;
                secRuleDefinedPhase = phase->m_secRulesPhase;
                delete phase;
            } else if (a->action_kind == actions::Action::RunTimeOnlyIfMatchKind ||
                a->action_kind == actions::Action::RunTimeBeforeMatchAttemptKind) {
                actions::transformations::None *none = dynamic_cast<actions::transformations::None *>(a);
                if (none != NULL) {
                    driver.error(yystack_[2].location, "The transformation none is not suitable to be part of the SecDefaultActions");
                    YYERROR;
                }
                checkedActions.push_back(a);
            } else {
                driver.error(yystack_[2].location, "The action '" + a->m_name + "' is not suitable to be part of the SecDefaultActions");
                YYERROR;
            }
        }
        if (definedPhase == -1) {
            definedPhase = modsecurity::Phases::RequestHeadersPhase;
        }

        if (!driver.m_defaultActions[definedPhase].empty()) {
            std::stringstream ss;
            ss << "SecDefaultActions can only be placed once per phase and configuration context. Phase ";
            ss << secRuleDefinedPhase;
            ss << " was informed already.";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        for (actions::Action *a : checkedActions) {
            driver.m_defaultActions[definedPhase].push_back(a);
        }

        delete actions;
      }
#line 1896 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 75:
#line 1138 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.addSecMarker(modsecurity::utils::string::removeBracketsIfNeeded(yystack_[0].value.as< std::string > ()));
      }
#line 1904 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 76:
#line 1142 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = modsecurity::Rules::DisabledRuleEngine;
      }
#line 1912 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 77:
#line 1146 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = modsecurity::Rules::EnabledRuleEngine;
      }
#line 1920 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 78:
#line 1150 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRuleEngine = modsecurity::Rules::DetectionOnlyRuleEngine;
      }
#line 1928 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 79:
#line 1154 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1936 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 80:
#line 1158 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secRequestBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1944 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 81:
#line 1162 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 1952 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 82:
#line 1166 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secResponseBodyAccess = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 1960 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 83:
#line 1170 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_components.push_back(yystack_[0].value.as< std::string > ());
      }
#line 1968 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 84:
#line 1174 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.load(yystack_[0].value.as< std::string > (), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleRemoveById: failed to load:";
            ss << yystack_[0].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 1985 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 85:
#line 1187 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        if (driver.m_exceptions.loadUpdateTargetByTag(yystack_[1].value.as< std::string > (), std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetByTag: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2002 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 86:
#line 1200 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string error;
        double ruleId;
        try {
            ruleId = std::stod(yystack_[1].value.as< std::string > ());
        } catch (...) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << "The input \"" + yystack_[1].value.as< std::string > () + "\" does not ";
            ss << "seems to be a valid rule id.";
            ss << ". ";
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }

        if (driver.m_exceptions.loadUpdateTargetById(ruleId, std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()), &error) == false) {
            std::stringstream ss;
            ss << "SecRuleUpdateTargetById: failed to load:";
            ss << yystack_[1].value.as< std::string > ();
            ss << ". ";
            ss << error;
            driver.error(yystack_[2].location, ss.str());
            YYERROR;
        }
      }
#line 2032 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 87:
#line 1227 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
          driver.m_debugLog->setDebugLogLevel(atoi(yystack_[0].value.as< std::string > ().c_str()));
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2048 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 88:
#line 1239 "seclang-parser.yy" // lalr1.cc:859
    {
        if (driver.m_debugLog != NULL) {
            std::string error;
            driver.m_debugLog->setDebugLogFile(yystack_[0].value.as< std::string > (), &error);
            if (error.size() > 0) {
                std::stringstream ss;
                ss << "Failed to start DebugLog: " << error;
                driver.error(yystack_[1].location, ss.str());
                YYERROR;
            }
        } else {
            std::stringstream ss;
            ss << "Internal error, there is no DebugLog ";
            ss << "object associated with the driver class";
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
      }
#line 2071 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 89:
#line 1259 "seclang-parser.yy" // lalr1.cc:859
    {
#ifdef WITH_GEOIP
        std::string err;
        std::string file = modsecurity::utils::find_resource(yystack_[0].value.as< std::string > (),
            driver.ref.back(), &err);
        if (file.empty()) {
            std::stringstream ss;
            ss << "Failed to load locate the GeoDB file from: " << yystack_[0].value.as< std::string > () << " ";
            ss << err;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
        if (GeoLookup::getInstance().setDataBase(file) == false) {
            std::stringstream ss;
            ss << "Failed to load the GeoDB from: ";
            ss << file;
            driver.error(yystack_[1].location, ss.str());
            YYERROR;
        }
#else
        std::stringstream ss;
        ss << "This version of ModSecurity was not compiled with GeoIP support.";
        driver.error(yystack_[1].location, ss.str());
        YYERROR;
#endif  // WITH_GEOIP
      }
#line 2102 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 90:
#line 1287 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimit.m_set = true;
        driver.m_requestBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2111 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 91:
#line 1292 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyNoFilesLimit.m_set = true;
        driver.m_requestBodyNoFilesLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2120 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 92:
#line 1297 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyInMemoryLimit.m_set = true;
        driver.m_requestBodyInMemoryLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2129 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 93:
#line 1302 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimit.m_set = true;
        driver.m_responseBodyLimit.m_value = atoi(yystack_[0].value.as< std::string > ().c_str());
      }
#line 2138 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 94:
#line 1307 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2146 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 95:
#line 1311 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_requestBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2154 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 96:
#line 1315 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::ProcessPartialBodyLimitAction;
      }
#line 2162 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 97:
#line 1319 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_responseBodyLimitAction = modsecurity::Rules::BodyLimitAction::RejectBodyLimitAction;
      }
#line 2170 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 98:
#line 1323 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::AbortOnFailedRemoteRulesAction;
      }
#line 2178 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 99:
#line 1327 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_remoteRulesActionOnFailed = Rules::OnFailedRemoteRulesAction::WarnOnFailedRemoteRulesAction;
      }
#line 2186 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 102:
#line 1333 "seclang-parser.yy" // lalr1.cc:859
    {
        std::istringstream buf(yystack_[0].value.as< std::string > ());
        std::istream_iterator<std::string> beg(buf), end;
        std::set<std::string> tokens(beg, end);
        for (std::set<std::string>::iterator it=tokens.begin();
            it!=tokens.end(); ++it)
        {
            driver.m_responseBodyTypeToBeInspected.insert(*it);
        }
      }
#line 2201 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 103:
#line 1344 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::FalseConfigBoolean;
      }
#line 2209 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 104:
#line 1348 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_secXMLExternalEntity = modsecurity::RulesProperties::TrueConfigBoolean;
      }
#line 2217 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 111:
#line 1358 "seclang-parser.yy" // lalr1.cc:859
    {
      }
#line 2224 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 112:
#line 1361 "seclang-parser.yy" // lalr1.cc:859
    {
        driver.m_httpblKey.m_set = true;
        driver.m_httpblKey.m_value = yystack_[0].value.as< std::string > ();
      }
#line 2233 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 113:
#line 1369 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[0].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2241 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 114:
#line 1373 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[1].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2249 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 115:
#line 1380 "seclang-parser.yy" // lalr1.cc:859
    {
        yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[2].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2258 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 116:
#line 1385 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2268 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 117:
#line 1391 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ()->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(yystack_[3].value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > ());
      }
#line 2278 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 118:
#line 1397 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        b->push_back(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ()));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2288 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 119:
#line 1403 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorExclusion(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2299 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 120:
#line 1410 "seclang-parser.yy" // lalr1.cc:859
    {
        std::unique_ptr<std::vector<std::unique_ptr<Variable>>> b(new std::vector<std::unique_ptr<Variable>>());
        std::unique_ptr<Variable> c(new VariableModificatorCount(std::move(yystack_[0].value.as< std::unique_ptr<Variable> > ())));
        b->push_back(std::move(c));
        yylhs.value.as< std::unique_ptr<std::vector<std::unique_ptr<Variable> > >  > () = std::move(b);
      }
#line 2310 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 121:
#line 1420 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2318 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 122:
#line 1424 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2326 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 123:
#line 1428 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Args_NoDictElement());
      }
#line 2334 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 124:
#line 1432 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2342 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 125:
#line 1436 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2350 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 126:
#line 1440 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPost_NoDictElement());
      }
#line 2358 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 127:
#line 1444 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2366 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 128:
#line 1448 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2374 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 129:
#line 1452 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGet_NoDictElement());
      }
#line 2382 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 130:
#line 1456 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2390 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 131:
#line 1460 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2398 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 132:
#line 1464 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesSizes_NoDictElement());
      }
#line 2406 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 133:
#line 1468 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2414 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 134:
#line 1472 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2422 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 135:
#line 1476 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesNames_NoDictElement());
      }
#line 2430 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 136:
#line 1480 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2438 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 137:
#line 1484 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2446 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 138:
#line 1488 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpContent_NoDictElement());
      }
#line 2454 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 139:
#line 1492 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2462 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 140:
#line 1496 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2470 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 141:
#line 1500 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartFileName_NoDictElement());
      }
#line 2478 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 142:
#line 1504 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2486 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 143:
#line 1508 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2494 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 144:
#line 1512 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultiPartName_NoDictElement());
      }
#line 2502 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 145:
#line 1516 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2510 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 146:
#line 1520 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2518 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 147:
#line 1524 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarsNames_NoDictElement());
      }
#line 2526 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 148:
#line 1528 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2534 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 149:
#line 1532 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2542 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 150:
#line 1536 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVars_NoDictElement());
      }
#line 2550 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 151:
#line 1540 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2558 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 152:
#line 1544 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2566 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 153:
#line 1548 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Files_NoDictElement());
      }
#line 2574 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 154:
#line 1552 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2582 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 155:
#line 1556 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2590 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 156:
#line 1560 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookies_NoDictElement());
      }
#line 2598 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 157:
#line 1564 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2606 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 158:
#line 1568 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2614 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 159:
#line 1572 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeaders_NoDictElement());
      }
#line 2622 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 160:
#line 1576 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2630 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 161:
#line 1580 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2638 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 162:
#line 1584 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeaders_NoDictElement());
      }
#line 2646 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 163:
#line 1588 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2654 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 164:
#line 1592 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2662 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 165:
#line 1596 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Geo_NoDictElement());
      }
#line 2670 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 166:
#line 1600 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2678 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 167:
#line 1604 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2686 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 168:
#line 1608 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestCookiesNames_NoDictElement());
      }
#line 2694 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 169:
#line 1612 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2702 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 170:
#line 1616 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2710 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 171:
#line 1620 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Rule_NoDictElement());
      }
#line 2718 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 172:
#line 1624 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 2726 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 173:
#line 1628 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV:" + yystack_[0].value.as< std::string > ()));
      }
#line 2734 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 174:
#line 1632 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Env("ENV"));
      }
#line 2742 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 175:
#line 1636 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 2750 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 176:
#line 1640 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML("XML:" + yystack_[0].value.as< std::string > ()));
      }
#line 2758 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 177:
#line 1644 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::XML_NoDictElement());
      }
#line 2766 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 178:
#line 1648 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2774 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 179:
#line 1652 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2782 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 180:
#line 1656 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesTmpNames_NoDictElement());
      }
#line 2790 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 181:
#line 1661 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2798 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 182:
#line 1665 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2806 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 183:
#line 1669 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Ip_NoDictElement());
      }
#line 2814 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 184:
#line 1674 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2822 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 185:
#line 1678 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2830 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 186:
#line 1682 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Global_NoDictElement());
      }
#line 2838 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 187:
#line 1687 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2846 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 188:
#line 1691 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2854 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 189:
#line 1695 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Tx_NoDictElement());
      }
#line 2862 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 190:
#line 1700 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElement(yystack_[0].value.as< std::string > ()));
      }
#line 2870 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 191:
#line 1704 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_DictElementRegexp(yystack_[0].value.as< std::string > ()));
      }
#line 2878 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 192:
#line 1708 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Session_NoDictElement());
      }
#line 2886 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 193:
#line 1715 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsNames());
      }
#line 2894 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 194:
#line 1719 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsGetNames());
      }
#line 2902 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 195:
#line 1723 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsPostNames());
      }
#line 2910 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 196:
#line 1727 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestHeadersNames());
      }
#line 2918 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 197:
#line 1731 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentType());
      }
#line 2926 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 198:
#line 1735 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseHeadersNames());
      }
#line 2934 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 199:
#line 1739 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ArgsCombinedSize());
      }
#line 2942 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 200:
#line 1743 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::AuthType());
      }
#line 2950 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 201:
#line 1747 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FilesCombinedSize());
      }
#line 2958 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 202:
#line 1751 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequest());
      }
#line 2966 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 203:
#line 1755 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::FullRequestLength());
      }
#line 2974 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 204:
#line 1759 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::InboundDataError());
      }
#line 2982 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 205:
#line 1763 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVar());
      }
#line 2990 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 206:
#line 1767 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MatchedVarName());
      }
#line 2998 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 207:
#line 1771 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartCrlfLFLines());
      }
#line 3006 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 208:
#line 1775 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartDateAfter());
      }
#line 3014 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 209:
#line 1779 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartFileLimitExceeded());
      }
#line 3022 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 210:
#line 1783 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartHeaderFolding());
      }
#line 3030 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 211:
#line 1787 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidHeaderFolding());
      }
#line 3038 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 212:
#line 1791 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartInvalidQuoting());
      }
#line 3046 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 213:
#line 1795 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartStrictError());
      }
#line 3054 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 214:
#line 1799 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::MultipartUnmatchedBoundary());
      }
#line 3062 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 215:
#line 1803 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::OutboundDataError());
      }
#line 3070 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 216:
#line 1807 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::PathInfo());
      }
#line 3078 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 217:
#line 1811 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::QueryString());
      }
#line 3086 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 218:
#line 1815 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteAddr());
      }
#line 3094 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 219:
#line 1819 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemoteHost());
      }
#line 3102 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 220:
#line 1823 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RemotePort());
      }
#line 3110 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 221:
#line 1827 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyError());
      }
#line 3118 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 222:
#line 1831 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyErrorMsg());
      }
#line 3126 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 223:
#line 1835 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessor());
      }
#line 3134 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 224:
#line 1839 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorError());
      }
#line 3142 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 225:
#line 1843 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ReqbodyProcessorErrorMsg());
      }
#line 3150 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 226:
#line 1847 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBasename());
      }
#line 3158 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 227:
#line 1851 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBody());
      }
#line 3166 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 228:
#line 1855 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestBodyLength());
      }
#line 3174 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 229:
#line 1859 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestFilename());
      }
#line 3182 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 230:
#line 1863 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestLine());
      }
#line 3190 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 231:
#line 1867 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestMethod());
      }
#line 3198 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 232:
#line 1871 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestProtocol());
      }
#line 3206 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 233:
#line 1875 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURI());
      }
#line 3214 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 234:
#line 1879 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::RequestURIRaw());
      }
#line 3222 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 235:
#line 1883 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Resource());
      }
#line 3230 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 236:
#line 1887 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseBody());
      }
#line 3238 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 237:
#line 1891 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseContentLength());
      }
#line 3246 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 238:
#line 1895 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseProtocol());
      }
#line 3254 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 239:
#line 1899 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ResponseStatus());
      }
#line 3262 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 240:
#line 1903 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerAddr());
      }
#line 3270 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 241:
#line 1907 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerName());
      }
#line 3278 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 242:
#line 1911 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::ServerPort());
      }
#line 3286 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 243:
#line 1915 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::SessionID());
      }
#line 3294 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 244:
#line 1919 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UniqueID());
      }
#line 3302 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 245:
#line 1923 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UrlEncodedError());
      }
#line 3310 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 246:
#line 1927 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::UserID());
      }
#line 3318 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 247:
#line 1931 "seclang-parser.yy" // lalr1.cc:859
    {
        VARIABLE_CONTAINER(yylhs.value.as< std::unique_ptr<Variable> > (), new Variables::Status());
      }
#line 3326 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 248:
#line 1935 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Duration(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3337 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 249:
#line 1943 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new ModsecBuild(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3348 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 250:
#line 1950 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new HighestSeverity(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3359 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 251:
#line 1957 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new RemoteUser(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3370 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 252:
#line 1964 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new Time(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3381 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 253:
#line 1971 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3392 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 254:
#line 1978 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeEpoch(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3403 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 255:
#line 1985 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeHour(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3414 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 256:
#line 1992 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMin(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3425 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 257:
#line 1999 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeMon(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3436 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 258:
#line 2006 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
            std::unique_ptr<Variable> c(new TimeSec(name));
            yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3447 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 259:
#line 2013 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeWDay(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3458 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 260:
#line 2020 "seclang-parser.yy" // lalr1.cc:859
    {
        std::string name(yystack_[0].value.as< std::string > ());
        char z = name.at(0);
        std::unique_ptr<Variable> c(new TimeYear(name));
        yylhs.value.as< std::unique_ptr<Variable> > () = std::move(c);
      }
#line 3469 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 261:
#line 2030 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Accuracy(yystack_[0].value.as< std::string > ()));
      }
#line 3477 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 262:
#line 2034 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Allow(yystack_[0].value.as< std::string > ()));
      }
#line 3485 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 263:
#line 2038 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Append", yystack_[1].location);
      }
#line 3493 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 264:
#line 2042 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::AuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 3501 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 265:
#line 2046 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Block(yystack_[0].value.as< std::string > ()));
      }
#line 3509 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 266:
#line 2050 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Capture(yystack_[0].value.as< std::string > ()));
      }
#line 3517 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 267:
#line 2054 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Chain(yystack_[0].value.as< std::string > ()));
      }
#line 3525 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 268:
#line 2058 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3534 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 269:
#line 2063 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3543 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 270:
#line 2068 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlAuditEngine", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3552 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 271:
#line 2073 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::AuditLogParts(yystack_[0].value.as< std::string > ()));
      }
#line 3560 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 272:
#line 2077 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorJSON(yystack_[0].value.as< std::string > ()));
      }
#line 3568 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 273:
#line 2081 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyProcessorXML(yystack_[0].value.as< std::string > ()));
      }
#line 3576 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 274:
#line 2085 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3585 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 275:
#line 2090 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("CtlForceReequestBody", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[1].value.as< std::string > ()));
      }
#line 3594 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 276:
#line 2095 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "true"));
      }
#line 3602 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 277:
#line 2099 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RequestBodyAccess(yystack_[1].value.as< std::string > () + "false"));
      }
#line 3610 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 278:
#line 2103 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=on"));
      }
#line 3618 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 279:
#line 2107 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=off"));
      }
#line 3626 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 280:
#line 2111 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleEngine("ctl:RuleEngine=detectiononly"));
      }
#line 3634 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 281:
#line 2115 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveById(yystack_[0].value.as< std::string > ()));
      }
#line 3642 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 282:
#line 2119 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetById(yystack_[0].value.as< std::string > ()));
      }
#line 3650 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 283:
#line 2123 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::ctl::RuleRemoveTargetByTag(yystack_[0].value.as< std::string > ()));
      }
#line 3658 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 284:
#line 2127 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Deny(yystack_[0].value.as< std::string > ()));
      }
#line 3666 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 285:
#line 2131 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("DeprecateVar", yystack_[1].location);
      }
#line 3674 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 286:
#line 2135 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("Drop", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 3683 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 287:
#line 2140 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Exec", yystack_[1].location);
      }
#line 3691 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 288:
#line 2144 "seclang-parser.yy" // lalr1.cc:859
    {
        //ACTION_NOT_SUPPORTED("ExpireVar", @0);
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Action(yystack_[0].value.as< std::string > ()));
      }
#line 3700 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 289:
#line 2149 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::RuleId(yystack_[0].value.as< std::string > ()));
      }
#line 3708 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 290:
#line 2153 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::InitCol(yystack_[0].value.as< std::string > ()));
      }
#line 3716 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 291:
#line 2157 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::LogData(yystack_[0].value.as< std::string > ()));
      }
#line 3724 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 292:
#line 2161 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Log(yystack_[0].value.as< std::string > ()));
      }
#line 3732 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 293:
#line 2165 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Maturity(yystack_[0].value.as< std::string > ()));
      }
#line 3740 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 294:
#line 2169 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Msg(yystack_[0].value.as< std::string > ()));
      }
#line 3748 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 295:
#line 2173 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::MultiMatch(yystack_[0].value.as< std::string > ()));
      }
#line 3756 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 296:
#line 2177 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoAuditLog(yystack_[0].value.as< std::string > ()));
      }
#line 3764 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 297:
#line 2181 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::NoLog(yystack_[0].value.as< std::string > ()));
      }
#line 3772 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 298:
#line 2185 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Pass(yystack_[0].value.as< std::string > ()));
      }
#line 3780 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 299:
#line 2189 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Pause", yystack_[1].location);
      }
#line 3788 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 300:
#line 2193 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Phase(yystack_[0].value.as< std::string > ()));
      }
#line 3796 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 301:
#line 2197 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Prepend", yystack_[1].location);
      }
#line 3804 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 302:
#line 2201 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("Proxy", yystack_[1].location);
      }
#line 3812 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 303:
#line 2205 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::disruptive::Redirect(yystack_[0].value.as< std::string > ()));
      }
#line 3820 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 304:
#line 2209 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Rev(yystack_[0].value.as< std::string > ()));
      }
#line 3828 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 305:
#line 2213 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseArg", yystack_[1].location);
      }
#line 3836 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 306:
#line 2217 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseMatched", yystack_[1].location);
      }
#line 3844 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 307:
#line 2221 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseMatchedBytes", yystack_[1].location);
      }
#line 3852 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 308:
#line 2225 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseRequestHeader", yystack_[1].location);
      }
#line 3860 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 309:
#line 2229 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SanatiseResponseHeader", yystack_[1].location);
      }
#line 3868 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 310:
#line 2233 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_NOT_SUPPORTED("SetEnv", yystack_[1].location);
      }
#line 3876 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 311:
#line 2237 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetRSC(yystack_[0].value.as< std::string > ()));
      }
#line 3884 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 312:
#line 2241 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetSID(yystack_[0].value.as< std::string > ()));
      }
#line 3892 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 313:
#line 2245 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetUID(yystack_[0].value.as< std::string > ()));
      }
#line 3900 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 314:
#line 2249 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::unique_ptr<actions::Action> > () = std::move(yystack_[0].value.as< std::unique_ptr<actions::Action> > ());
      }
#line 3908 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 315:
#line 2253 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Severity(yystack_[0].value.as< std::string > ()));
      }
#line 3916 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 316:
#line 2257 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Skip(yystack_[0].value.as< std::string > ()));
      }
#line 3924 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 317:
#line 2261 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SkipAfter(yystack_[0].value.as< std::string > ()));
      }
#line 3932 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 318:
#line 2265 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::data::Status(yystack_[0].value.as< std::string > ()));
      }
#line 3940 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 319:
#line 2269 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Tag(yystack_[0].value.as< std::string > ()));
      }
#line 3948 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 320:
#line 2273 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::Ver(yystack_[0].value.as< std::string > ()));
      }
#line 3956 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 321:
#line 2277 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::XmlNS(yystack_[0].value.as< std::string > ()));
      }
#line 3964 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 322:
#line 2281 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityZero7bit(yystack_[0].value.as< std::string > ()));
      }
#line 3972 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 323:
#line 2285 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityOdd7bit(yystack_[0].value.as< std::string > ()));
      }
#line 3980 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 324:
#line 2289 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ParityEven7bit(yystack_[0].value.as< std::string > ()));
      }
#line 3988 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 325:
#line 2293 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::SqlHexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 3996 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 326:
#line 2297 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CmdLine(yystack_[0].value.as< std::string > ()));
      }
#line 4004 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 327:
#line 2301 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Sha1(yystack_[0].value.as< std::string > ()));
      }
#line 4012 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 328:
#line 2305 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Md5(yystack_[0].value.as< std::string > ()));
      }
#line 4020 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 329:
#line 2309 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexEncode(yystack_[0].value.as< std::string > ()));
      }
#line 4028 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 330:
#line 2313 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HexDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4036 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 331:
#line 2317 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::LowerCase(yystack_[0].value.as< std::string > ()));
      }
#line 4044 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 332:
#line 2321 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UpperCase(yystack_[0].value.as< std::string > ()));
      }
#line 4052 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 333:
#line 2325 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecodeUni(yystack_[0].value.as< std::string > ()));
      }
#line 4060 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 334:
#line 2329 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::UrlDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4068 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 335:
#line 2333 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::None(yystack_[0].value.as< std::string > ()));
      }
#line 4076 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 336:
#line 2337 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CompressWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4084 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 337:
#line 2341 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveWhitespace(yystack_[0].value.as< std::string > ()));
      }
#line 4092 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 338:
#line 2345 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceNulls(yystack_[0].value.as< std::string > ()));
      }
#line 4100 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 339:
#line 2349 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveNulls(yystack_[0].value.as< std::string > ()));
      }
#line 4108 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 340:
#line 2353 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::HtmlEntityDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4116 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 341:
#line 2357 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::JsDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4124 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 342:
#line 2361 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::CssDecode(yystack_[0].value.as< std::string > ()));
      }
#line 4132 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 343:
#line 2365 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Trim(yystack_[0].value.as< std::string > ()));
      }
#line 4140 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 344:
#line 2369 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePathWin(yystack_[0].value.as< std::string > ()));
      }
#line 4148 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 345:
#line 2373 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::NormalisePath(yystack_[0].value.as< std::string > ()));
      }
#line 4156 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 346:
#line 2377 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Length(yystack_[0].value.as< std::string > ()));
      }
#line 4164 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 347:
#line 2381 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::Utf8ToUnicode(yystack_[0].value.as< std::string > ()));
      }
#line 4172 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 348:
#line 2385 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveCommentsChar(yystack_[0].value.as< std::string > ()));
      }
#line 4180 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 349:
#line 2389 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::RemoveComments(yystack_[0].value.as< std::string > ()));
      }
#line 4188 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 350:
#line 2393 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::transformations::ReplaceComments(yystack_[0].value.as< std::string > ()));
      }
#line 4196 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 351:
#line 2400 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::unsetOperation, yystack_[0].value.as< std::string > ()));
      }
#line 4204 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 352:
#line 2404 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setToOneOperation, yystack_[0].value.as< std::string > ()));
      }
#line 4212 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 353:
#line 2408 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::setOperation, yystack_[2].value.as< std::string > (), yystack_[0].value.as< std::string > ()));
      }
#line 4220 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 354:
#line 2412 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::sumAndSetOperation, yystack_[2].value.as< std::string > (), yystack_[0].value.as< std::string > ()));
      }
#line 4228 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 355:
#line 2416 "seclang-parser.yy" // lalr1.cc:859
    {
        ACTION_CONTAINER(yylhs.value.as< std::unique_ptr<actions::Action> > (), new actions::SetVar(actions::SetVarOperation::substractAndSetOperation, yystack_[2].value.as< std::string > (), yystack_[0].value.as< std::string > ()));
      }
#line 4236 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 356:
#line 2423 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::string > () = yystack_[0].value.as< std::string > ();
      }
#line 4244 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 357:
#line 2428 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::string > () = yystack_[1].value.as< std::string > () + yystack_[0].value.as< std::string > ();
      }
#line 4252 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 358:
#line 2435 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::string > () = yystack_[0].value.as< std::string > ();
      }
#line 4260 "seclang-parser.cc" // lalr1.cc:859
    break;

  case 359:
#line 2440 "seclang-parser.yy" // lalr1.cc:859
    {
        yylhs.value.as< std::string > () = yystack_[1].value.as< std::string > () + yystack_[0].value.as< std::string > ();
      }
#line 4268 "seclang-parser.cc" // lalr1.cc:859
    break;


#line 4272 "seclang-parser.cc" // lalr1.cc:859
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state, yyla));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyla.empty ())
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyla.clear ();
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyla.empty ())
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyla.empty ())
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
  seclang_parser::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
  seclang_parser::yysyntax_error_ (state_type yystate, const symbol_type& yyla) const
  {
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yyla) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (!yyla.empty ())
      {
        int yytoken = yyla.type_get ();
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    std::string yyres;
    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const short int seclang_parser::yypact_ninf_ = -276;

  const signed char seclang_parser::yytable_ninf_ = -1;

  const short int
  seclang_parser::yypact_[] =
  {
     373,  -276,  -276,  -276,  -276,  -202,  -276,  -276,  -276,  -276,
    -276,  -212,  -276,  -276,  -276,  -276,  -276,    58,  -276,  -276,
      61,  -276,    66,  -276,    65,  -209,   661,   661,  -276,  -276,
    -276,  -276,  -211,  -276,    17,    17,    70,    87,  -276,  -276,
    -276,    89,  -276,  -276,  -276,  -276,  -276,  -276,    17,   661,
     432,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,   300,    62,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
      56,  -276,  -276,  -276,   128,   132,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,   843,  -276,     3,  -276,  -276,
    -276,  -276,   461,   461,    63,    67,    69,    71,    74,    76,
      96,    98,   102,   104,   106,   108,   110,   112,   114,   116,
    -276,  -276,   118,  -276,  -276,  -276,  -276,   120,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,   122,   124,   126,
     129,   131,   133,    99,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,     7,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,   600,  -276,  -276,
    -276,  -275,  -275,  -276,   -71,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,    -2,   843,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,    -1,   181,    73,
    -133,   -51,    31,  -276,  -276,    36,    55,   113,   121,  -276,
     134,   137,   156,   184,   191,   192,   193,   194,   195,   196,
     198,   199,  -276,   200,   201,  -276,   202,   203,   204,   205,
    -276,  -276,   206,   207,   209,   210,   661,  -276,  -276,  -276,
      68,    68,    68,  -276,  -276,  -276,   461,   461,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,  -276,
    -276,    68,  -276,  -276,  -276,  -276,  -276,  -276
  };

  const unsigned short int
  seclang_parser::yydefact_[] =
  {
       0,     2,    83,     7,     6,     0,    11,    14,    12,    13,
      15,     0,    88,    87,    89,   101,   100,     0,    92,    90,
       0,    91,     0,    93,     0,     0,     0,     0,    75,   110,
     111,   112,     0,    84,     0,     0,     0,     0,    23,    21,
      22,     0,   102,   107,   108,   106,   109,   105,     0,     0,
       0,     4,    69,     5,     9,    10,     8,    18,    17,    16,
      80,    79,    94,    95,    82,    81,    96,    97,    78,    76,
      77,     0,     0,   261,   262,   263,   264,   265,   266,   267,
       0,   271,   272,   273,     0,     0,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   292,   291,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   315,
     316,   317,   318,   319,   326,   336,   342,   329,   330,   340,
     341,   346,   331,   328,   335,   345,   344,   324,   323,   322,
     349,   348,   339,   337,   350,   338,   327,   325,   343,   332,
     334,   333,   347,   320,   321,     0,    72,    27,    29,    74,
      98,    99,     0,     0,   123,   126,   129,   132,   135,   138,
     141,   144,   147,   150,   153,   156,   159,   162,   165,   168,
     199,   194,   171,   193,   195,   200,   201,   180,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   222,   221,   225,
     224,   223,   226,   228,   227,   229,   196,   230,   231,   232,
     234,   233,   235,   236,   237,   197,   198,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   183,   186,   189,
     192,   174,   177,     0,   249,   248,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,    85,   113,   118,
      86,    20,    19,    25,    24,   103,   104,     0,    73,     1,
       3,     0,   356,   314,   352,   280,   279,   278,   269,   268,
     270,   275,   274,   277,   276,     0,     0,   120,   119,   121,
     122,   124,   125,   127,   128,   130,   131,   133,   134,   136,
     137,   139,   140,   142,   143,   145,   146,   148,   149,   151,
     152,   154,   155,   157,   158,   160,   161,   163,   164,   166,
     167,   169,   170,   178,   179,   181,   182,   184,   185,   187,
     188,   190,   191,   172,   173,   175,   176,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,    68,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    32,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,    71,    30,   351,   357,
       0,     0,     0,    26,    28,   114,     0,     0,   115,    33,
      31,    67,    52,    51,    53,    54,    40,    55,    48,    56,
      39,    58,    57,    59,    60,    62,    61,    63,    49,    64,
      65,    66,    41,    42,    43,    44,    45,    46,    47,    50,
      70,   358,   353,   354,   355,   117,   116,   359
  };

  const short int
  seclang_parser::yypgoto_[] =
  {
    -276,  -276,   314,  -276,   -27,   288,  -276,   107,  -276,   -33,
     211,   208,   161,  -276,    81,  -112
  };

  const short int
  seclang_parser::yydefgoto_[] =
  {
      -1,    50,    51,    52,   156,   157,   376,   377,    53,   257,
     258,   259,   158,   273,   274,   422
  };

  const unsigned short int
  seclang_parser::yytable_[] =
  {
     159,   286,   260,   338,   160,    57,   286,    68,    58,    69,
      70,   338,    59,   272,   161,   267,    54,    55,   380,   381,
     382,    56,   268,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   391,   241,   242,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   392,   241,   242,   386,   387,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   393,   241,   242,   423,
     424,   394,   383,   385,   278,   279,    60,    61,   275,   280,
     276,   277,    62,    63,    64,    65,    66,    67,   261,   262,
     395,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   263,   264,   265,   266,   427,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   389,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   281,   282,   396,   420,
     283,   284,   378,   379,   289,   290,   397,   421,   291,   292,
     293,   294,   295,   296,   270,   297,   298,   299,   300,   398,
     287,   288,   399,     1,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   301,   302,   303,
     304,   400,   271,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   401,
     331,   332,   333,   334,   335,   336,   402,   403,   404,   405,
     406,   407,   269,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   285,   418,   419,   390,   384,     0,     0,
       0,     0,     0,     0,   337,     0,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   388,   241,   242,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,   272,     0,
       0,     0,     0,     0,   425,   426,     0,     0,     0,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,    71,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,   155,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154
  };

  const short int
  seclang_parser::yycheck_[] =
  {
      27,     3,    35,     4,   215,   217,     3,   216,   220,   218,
     219,     4,   224,   288,   225,    48,   218,   219,    89,    90,
      91,   223,    49,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   235,    86,    87,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   235,    86,    87,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   235,    86,    87,   381,
     382,   235,   274,   274,   218,   219,   218,   219,   216,   223,
     218,   219,   221,   222,   218,   219,   221,   222,   218,   219,
     235,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,   287,   218,   219,   218,   219,   421,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   218,   219,   235,   376,
     218,   219,   271,   272,   291,   292,   235,   289,   291,   292,
     291,   292,   291,   292,    50,   291,   292,   291,   292,   235,
     162,   163,   235,     0,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   291,   292,   291,
     292,   235,    92,   291,   292,   291,   292,   291,   292,   291,
     292,   291,   292,   291,   292,   291,   292,   291,   292,   291,
     292,   291,   292,   291,   292,   291,   292,   291,   292,   235,
     291,   292,   291,   292,   291,   292,   235,   235,   235,   235,
     235,   235,     0,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   155,   235,   235,   339,   286,    -1,    -1,
      -1,    -1,    -1,    -1,   243,    -1,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   338,    86,    87,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   288,    -1,
      -1,    -1,    -1,    -1,   386,   387,    -1,    -1,    -1,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
     228,   229,   230,   231,   232,   233,   234,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   275,   276,   277,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,    88,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,   274,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175
  };

  const unsigned short int
  seclang_parser::yystos_[] =
  {
       0,     0,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     294,   295,   296,   301,   218,   219,   223,   217,   220,   224,
     218,   219,   221,   222,   218,   219,   221,   222,   216,   218,
     219,    88,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   274,   297,   298,   305,   297,
     215,   225,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    86,    87,   274,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   284,   285,   286,   287,   302,   303,   304,
     302,   218,   219,   218,   219,   218,   219,   302,   297,     0,
     295,    92,   288,   306,   307,   216,   218,   219,   218,   219,
     223,   218,   219,   218,   219,   298,     3,   304,   304,   291,
     292,   291,   292,   291,   292,   291,   292,   291,   292,   291,
     292,   291,   292,   291,   292,   291,   292,   291,   292,   291,
     292,   291,   292,   291,   292,   291,   292,   291,   292,   291,
     292,   291,   292,   291,   292,   291,   292,   291,   292,   291,
     292,   291,   292,   291,   292,   291,   292,   303,     4,    92,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   299,   300,   307,   307,
      89,    90,    91,   274,   305,   274,     6,     7,   304,   259,
     300,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   235,   235,   235,   235,   235,   235,   235,
     297,   289,   308,   308,   308,   304,   304,   308
  };

  const unsigned short int
  seclang_parser::yyr1_[] =
  {
       0,   293,   294,   294,   294,   295,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   297,   297,   298,   298,
     299,   299,   299,   299,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   301,   301,   301,   301,   301,   301,   301,
     301,   301,   301,   302,   302,   303,   303,   303,   303,   303,
     303,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   306,   306,   306,   306,   306,   307,   307,   308,   308
  };

  const unsigned char
  seclang_parser::yyr2_[] =
  {
       0,     2,     1,     2,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     3,     1,     3,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       4,     3,     2,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     4,     1,     2,
       2,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     2,     2,     1,     2,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     2,     1,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     3,     3,     3,     1,     2,     1,     2
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const seclang_parser::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\",\"", "PIPE", "NEW_LINE",
  "VAR_COUNT", "VAR_EXCLUSION", "VARIABLE_ARGS", "VARIABLE_ARGS_POST",
  "VARIABLE_ARGS_GET", "VARIABLE_FILES_SIZES", "VARIABLE_FILES_NAMES",
  "VARIABLE_FILES_TMP_CONTENT", "VARIABLE_MULTIPART_FILENAME",
  "VARIABLE_MULTIPART_NAME", "VARIABLE_MATCHED_VARS_NAMES",
  "VARIABLE_MATCHED_VARS", "VARIABLE_FILES", "VARIABLE_REQUEST_COOKIES",
  "VARIABLE_REQUEST_HEADERS", "VARIABLE_RESPONSE_HEADERS", "VARIABLE_GEO",
  "VARIABLE_REQUEST_COOKIES_NAMES", "VARIABLE_ARGS_COMBINED_SIZE",
  "VARIABLE_ARGS_GET_NAMES", "VARIABLE_RULE", "\"Variable ARGS_NAMES\"",
  "VARIABLE_ARGS_POST_NAMES", "\"AUTH_TYPE\"", "\"FILES_COMBINED_SIZE\"",
  "\"FILES_TMPNAMES\"", "\"FULL_REQUEST\"", "\"FULL_REQUEST_LENGTH\"",
  "\"INBOUND_DATA_ERROR\"", "\"MATCHED_VAR\"", "\"MATCHED_VAR_NAME\"",
  "\"MULTIPART_CRLF_LF_LINES\"", "\"MULTIPART_DATA_AFTER\"",
  "\"MULTIPART_FILE_LIMIT_EXCEEDED\"", "\"MULTIPART_HEADER_FOLDING\"",
  "\"MULTIPART_INVALID_HEADER_FOLDING\"", "\"MULTIPART_INVALID_QUOTING\"",
  "\"MULTIPART_STRICT_ERROR\"", "\"MULTIPART_UNMATCHED_BOUNDARY\"",
  "\"OUTBOUND_DATA_ERROR\"", "\"PATH_INFO\"", "\"QUERY_STRING\"",
  "\"REMOTE_ADDR\"", "\"REMOTE_HOST\"", "\"REMOTE_PORT\"",
  "\"REQBODY_ERROR_MSG\"", "\"REQBODY_ERROR\"",
  "\"REQBODY_PROCESSOR_ERROR_MSG\"", "\"REQBODY_PROCESSOR_ERROR\"",
  "\"REQBODY_PROCESSOR\"", "\"REQUEST_BASENAME\"",
  "\"REQUEST_BODY_LENGTH\"", "\"REQUEST_BODY\"", "\"REQUEST_FILENAME\"",
  "VARIABLE_REQUEST_HEADERS_NAMES", "\"REQUEST_LINE\"",
  "\"REQUEST_METHOD\"", "\"REQUEST_PROTOCOL\"", "\"REQUEST_URI_RAW\"",
  "\"REQUEST_URI\"", "\"RESOURCE\"", "\"RESPONSE_BODY\"",
  "\"RESPONSE_CONTENT_LENGTH\"", "VARIABLE_RESPONSE_CONTENT_TYPE",
  "VARIABLE_RESPONSE_HEADERS_NAMES", "\"RESPONSE_PROTOCOL\"",
  "\"RESPONSE_STATUS\"", "\"SERVER_ADDR\"", "\"SERVER_NAME\"",
  "\"SERVER_PORT\"", "\"SESSIONID\"", "\"UNIQUE_ID\"",
  "\"URLENCODED_ERROR\"", "\"USERID\"", "\"VARIABLE_STATUS\"",
  "\"VARIABLE_IP\"", "\"VARIABLE_GLOBAL\"", "\"VARIABLE_TX\"",
  "\"VARIABLE_SESSION\"", "\"VARIABLE_USER\"", "\"RUN_TIME_VAR_ENV\"",
  "\"RUN_TIME_VAR_XML\"", "\"SetVar\"", "SETVAR_OPERATION_EQUALS",
  "SETVAR_OPERATION_EQUALS_PLUS", "SETVAR_OPERATION_EQUALS_MINUS",
  "\"NOT\"", "\"ACTION_CTL_RULE_ENGINE\"", "\"Accuracy\"", "\"Allow\"",
  "\"Append\"", "\"AuditLog\"", "\"Block\"", "\"Capture\"", "\"Chain\"",
  "\"ACTION_CTL_AUDIT_ENGINE\"", "\"ACTION_CTL_AUDIT_LOG_PARTS\"",
  "\"ACTION_CTL_BDY_JSON\"", "\"ACTION_CTL_BDY_XML\"",
  "\"ACTION_CTL_FORCE_REQ_BODY_VAR\"",
  "\"ACTION_CTL_REQUEST_BODY_ACCESS\"", "\"ACTION_CTL_RULE_REMOVE_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_ID\"",
  "\"ACTION_CTL_RULE_REMOVE_TARGET_BY_TAG\"", "\"Deny\"",
  "\"DeprecateVar\"", "\"Drop\"", "\"Exec\"", "\"ExpireVar\"", "\"Id\"",
  "\"InitCol\"", "\"Log\"", "\"LogData\"", "\"Maturity\"", "\"Msg\"",
  "\"MultiMatch\"", "\"NoAuditLog\"", "\"NoLog\"", "\"Pass\"", "\"Pause\"",
  "\"Phase\"", "\"Prepend\"", "\"Proxy\"", "\"Redirect\"", "\"Rev\"",
  "\"SanatiseArg\"", "\"SanatiseMatched\"", "\"SanatiseMatchedBytes\"",
  "\"SanatiseRequestHeader\"", "\"SanatiseResponseHeader\"", "\"SetEnv\"",
  "\"SetRsc\"", "\"SetSid\"", "\"SetUID\"", "\"Severity\"", "\"Skip\"",
  "\"SkipAfter\"", "\"Status\"", "\"Tag\"",
  "\"ACTION_TRANSFORMATION_CMD_LINE\"",
  "\"ACTION_TRANSFORMATION_COMPRESS_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_CSS_DECODE\"",
  "\"ACTION_TRANSFORMATION_HEX_ENCODE\"",
  "\"ACTION_TRANSFORMATION_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_HTML_ENTITY_DECODE\"",
  "\"ACTION_TRANSFORMATION_JS_DECODE\"",
  "\"ACTION_TRANSFORMATION_LENGTH\"",
  "\"ACTION_TRANSFORMATION_LOWERCASE\"", "\"ACTION_TRANSFORMATION_MD5\"",
  "\"ACTION_TRANSFORMATION_NONE\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH\"",
  "\"ACTION_TRANSFORMATION_NORMALISE_PATH_WIN\"",
  "\"ACTION_TRANSFORMATION_PARITY_EVEN_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ODD_7_BIT\"",
  "\"ACTION_TRANSFORMATION_PARITY_ZERO_7_BIT\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_COMMENTS_CHAR\"",
  "\"ACTION_TRANSFORMATION_REMOVE_NULLS\"",
  "\"ACTION_TRANSFORMATION_REMOVE_WHITESPACE\"",
  "\"ACTION_TRANSFORMATION_REPLACE_COMMENTS\"",
  "\"ACTION_TRANSFORMATION_REPLACE_NULLS\"",
  "\"ACTION_TRANSFORMATION_SHA1\"",
  "\"ACTION_TRANSFORMATION_SQL_HEX_DECODE\"",
  "\"ACTION_TRANSFORMATION_TRIM\"", "\"ACTION_TRANSFORMATION_UPPERCASE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE\"",
  "\"ACTION_TRANSFORMATION_URL_DECODE_UNI\"",
  "\"ACTION_TRANSFORMATION_UTF8_TO_UNICODE\"", "\"Ver\"", "\"xmlns\"",
  "\"CONFIG_COMPONENT_SIG\"", "\"CONFIG_DIR_AUDIT_DIR\"",
  "\"CONFIG_DIR_AUDIT_DIR_MOD\"", "\"CONFIG_DIR_AUDIT_ENG\"",
  "\"CONFIG_DIR_AUDIT_FLE_MOD\"", "\"CONFIG_DIR_AUDIT_LOG\"",
  "\"CONFIG_DIR_AUDIT_LOG2\"", "\"CONFIG_DIR_AUDIT_LOG_P\"",
  "\"CONFIG_DIR_AUDIT_STS\"", "\"CONFIG_DIR_AUDIT_TPE\"",
  "\"CONFIG_DIR_DEBUG_LOG\"", "\"CONFIG_DIR_DEBUG_LVL\"",
  "\"CONFIG_DIR_GEO_DB\"", "\"CONFIG_DIR_PCRE_MATCH_LIMIT\"",
  "\"CONFIG_DIR_PCRE_MATCH_LIMIT_RECURSION\"", "\"CONFIG_DIR_REQ_BODY\"",
  "\"CONFIG_DIR_REQ_BODY_IN_MEMORY_LIMIT\"",
  "\"CONFIG_DIR_REQ_BODY_LIMIT\"", "\"CONFIG_DIR_REQ_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_REQ_BODY_NO_FILES_LIMIT\"", "\"CONFIG_DIR_RES_BODY\"",
  "\"CONFIG_DIR_RES_BODY_LIMIT\"", "\"CONFIG_DIR_RES_BODY_LIMIT_ACTION\"",
  "\"CONFIG_DIR_RULE_ENG\"", "\"CONFIG_DIR_SEC_ACTION\"",
  "\"CONFIG_DIR_SEC_DEFAULT_ACTION\"", "\"CONFIG_DIR_SEC_MARKER\"",
  "\"CONFIG_DIR_UNICODE_MAP_FILE\"", "\"CONFIG_SEC_COLLECTION_TIMEOUT\"",
  "\"CONFIG_SEC_HTTP_BLKEY\"", "\"CONFIG_SEC_REMOTE_RULES_FAIL_ACTION\"",
  "\"CONFIG_SEC_RULE_REMOVE_BY_ID\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_TAG\"",
  "\"CONFIG_SEC_RULE_UPDATE_TARGET_BY_ID\"",
  "\"CONFIG_UPDLOAD_KEEP_FILES\"", "\"CONFIG_UPDLOAD_SAVE_TMP_FILES\"",
  "\"CONFIG_UPLOAD_DIR\"", "\"CONFIG_UPLOAD_FILE_LIMIT\"",
  "\"CONFIG_UPLOAD_FILE_MODE\"", "\"CONFIG_VALUE_ABORT\"",
  "\"CONFIG_VALUE_DETC\"", "\"CONFIG_VALUE_HTTPS\"",
  "\"CONFIG_VALUE_OFF\"", "\"CONFIG_VALUE_ON\"",
  "\"CONFIG_VALUE_PARALLEL\"", "\"CONFIG_VALUE_PROCESS_PARTIAL\"",
  "\"CONFIG_VALUE_REJECT\"", "\"CONFIG_VALUE_RELEVANT_ONLY\"",
  "\"CONFIG_VALUE_SERIAL\"", "\"CONFIG_VALUE_WARN\"",
  "\"CONFIG_XML_EXTERNAL_ENTITY\"", "\"CONGIG_DIR_RESPONSE_BODY_MP\"",
  "\"CONGIG_DIR_SEC_ARG_SEP\"", "\"CONGIG_DIR_SEC_COOKIE_FORMAT\"",
  "\"CONGIG_DIR_SEC_DATA_DIR\"", "\"CONGIG_DIR_SEC_STATUS_ENGINE\"",
  "\"CONGIG_DIR_SEC_TMP_DIR\"", "\"DIRECTIVE\"",
  "\"DIRECTIVE_SECRULESCRIPT\"", "\"FREE_TEXT\"", "\"OPERATOR\"",
  "\"OPERATOR_BEGINS_WITH\"", "\"OPERATOR_CONTAINS\"",
  "\"OPERATOR_CONTAINS_WORD\"", "\"OPERATOR_DETECT_SQLI\"",
  "\"OPERATOR_DETECT_XSS\"", "\"OPERATOR_ENDS_WITH\"", "\"OPERATOR_EQ\"",
  "\"OPERATOR_FUZZY_HASH\"", "\"OPERATOR_GE\"", "\"OPERATOR_GEOLOOKUP\"",
  "\"OPERATOR_GSB_LOOKUP\"", "\"OPERATOR_GT\"",
  "\"OPERATOR_INSPECT_FILE\"", "\"OPERATOR_IP_MATCH\"",
  "\"OPERATOR_IP_MATCH_FROM_FILE\"", "\"OPERATOR_LE\"", "\"OPERATOR_LT\"",
  "\"OPERATOR_PM\"", "\"OPERATOR_PM_FROM_FILE\"", "\"OPERATOR_RBL\"",
  "\"OPERATOR_RSUB\"", "\"OPERATOR_RX\"", "\"Operator RX (content only)\"",
  "\"OPERATOR_STR_EQ\"", "\"OPERATOR_STR_MATCH\"",
  "\"OPERATOR_UNCONDITIONAL_MATCH\"", "\"OPERATOR_VALIDATE_BYTE_RANGE\"",
  "\"OPERATOR_VALIDATE_DTD\"", "\"OPERATOR_VALIDATE_HASH\"",
  "\"OPERATOR_VALIDATE_SCHEMA\"", "\"OPERATOR_VALIDATE_URL_ENCODING\"",
  "\"OPERATOR_VALIDATE_UTF8_ENCODING\"", "\"OPERATOR_VERIFY_CC\"",
  "\"OPERATOR_VERIFY_CPF\"", "\"OPERATOR_VERIFY_SSN\"",
  "\"OPERATOR_WITHIN\"", "\"OP_QUOTE\"", "\"QUOTATION_MARK\"",
  "\"RUN_TIME_VAR_BLD\"", "\"RUN_TIME_VAR_DUR\"", "\"RUN_TIME_VAR_HSV\"",
  "\"RUN_TIME_VAR_REMOTE_USER\"", "\"RUN_TIME_VAR_TIME\"",
  "\"RUN_TIME_VAR_TIME_DAY\"", "\"RUN_TIME_VAR_TIME_EPOCH\"",
  "\"RUN_TIME_VAR_TIME_HOUR\"", "\"RUN_TIME_VAR_TIME_MIN\"",
  "\"RUN_TIME_VAR_TIME_MON\"", "\"RUN_TIME_VAR_TIME_SEC\"",
  "\"RUN_TIME_VAR_TIME_WDAY\"", "\"RUN_TIME_VAR_TIME_YEAR\"",
  "\"SETVAR_VARIABLE_PART\"", "\"SETVAR_CONTENT_PART\"", "\"VARIABLE\"",
  "\"Dictionary element\"", "\"Dictionary element, selected by regexp\"",
  "$accept", "input", "line", "audit_log", "actions", "actions_may_quoted",
  "op", "op_before_init", "expression", "variables",
  "variables_may_be_quoted", "var", "act", "setvar_action",
  "setvar_variable", "setvar_content", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned short int
  seclang_parser::yyrline_[] =
  {
       0,   679,   679,   683,   684,   687,   692,   698,   704,   708,
     712,   718,   724,   730,   736,   742,   751,   755,   759,   765,
     769,   773,   778,   783,   788,   792,   799,   803,   810,   816,
     826,   835,   845,   854,   866,   870,   874,   878,   882,   886,
     891,   896,   900,   904,   909,   913,   917,   922,   927,   932,
     937,   941,   945,   949,   953,   957,   961,   965,   969,   973,
     977,   981,   985,   989,   993,   997,  1001,  1005,  1009,  1023,
    1024,  1048,  1067,  1082,  1090,  1137,  1141,  1145,  1149,  1153,
    1157,  1161,  1165,  1169,  1173,  1186,  1199,  1226,  1238,  1258,
    1286,  1291,  1296,  1301,  1306,  1310,  1314,  1318,  1322,  1326,
    1330,  1331,  1332,  1343,  1347,  1351,  1352,  1353,  1354,  1355,
    1356,  1357,  1360,  1368,  1372,  1379,  1384,  1390,  1396,  1402,
    1409,  1419,  1423,  1427,  1431,  1435,  1439,  1443,  1447,  1451,
    1455,  1459,  1463,  1467,  1471,  1475,  1479,  1483,  1487,  1491,
    1495,  1499,  1503,  1507,  1511,  1515,  1519,  1523,  1527,  1531,
    1535,  1539,  1543,  1547,  1551,  1555,  1559,  1563,  1567,  1571,
    1575,  1579,  1583,  1587,  1591,  1595,  1599,  1603,  1607,  1611,
    1615,  1619,  1623,  1627,  1631,  1635,  1639,  1643,  1647,  1651,
    1655,  1660,  1664,  1668,  1673,  1677,  1681,  1686,  1690,  1694,
    1699,  1703,  1707,  1714,  1718,  1722,  1726,  1730,  1734,  1738,
    1742,  1746,  1750,  1754,  1758,  1762,  1766,  1770,  1774,  1778,
    1782,  1786,  1790,  1794,  1798,  1802,  1806,  1810,  1814,  1818,
    1822,  1826,  1830,  1834,  1838,  1842,  1846,  1850,  1854,  1858,
    1862,  1866,  1870,  1874,  1878,  1882,  1886,  1890,  1894,  1898,
    1902,  1906,  1910,  1914,  1918,  1922,  1926,  1930,  1934,  1942,
    1949,  1956,  1963,  1970,  1977,  1984,  1991,  1998,  2005,  2012,
    2019,  2029,  2033,  2037,  2041,  2045,  2049,  2053,  2057,  2062,
    2067,  2072,  2076,  2080,  2084,  2089,  2094,  2098,  2102,  2106,
    2110,  2114,  2118,  2122,  2126,  2130,  2134,  2139,  2143,  2148,
    2152,  2156,  2160,  2164,  2168,  2172,  2176,  2180,  2184,  2188,
    2192,  2196,  2200,  2204,  2208,  2212,  2216,  2220,  2224,  2228,
    2232,  2236,  2240,  2244,  2248,  2252,  2256,  2260,  2264,  2268,
    2272,  2276,  2280,  2284,  2288,  2292,  2296,  2300,  2304,  2308,
    2312,  2316,  2320,  2324,  2328,  2332,  2336,  2340,  2344,  2348,
    2352,  2356,  2360,  2364,  2368,  2372,  2376,  2380,  2384,  2388,
    2392,  2399,  2403,  2407,  2411,  2415,  2422,  2427,  2434,  2439
  };

  // Print the state stack on the debug stream.
  void
  seclang_parser::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
  seclang_parser::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG



} // yy
#line 5205 "seclang-parser.cc" // lalr1.cc:1167
#line 2445 "seclang-parser.yy" // lalr1.cc:1168


void yy::seclang_parser::error (const location_type& l, const std::string& m) {
    driver.error (l, m);
}
