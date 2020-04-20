#include "print-tokens.h"
#include "bison-chapel.h"

#include <iostream>

static bool printing_tokens = false;

void startPrintingTokens(const char* file) {
    print_token("---------------------------------------------------\n");
    print_token("Tokens for file: ");
    print_token(file);
    print_token("\n");
    print_token("***************************************************\n");
    printing_tokens = true;
}

void stopPrintingTokens() {
    print_token("\n ---------------------------------------------------\n");
    printing_tokens = false;
}

void printToken(int token) {
    if(!printing_tokens){
        return;
    }
    switch(token){
        case TIDENT:
            print_token("TIDENT");
            break;
        case TQUERIEDIDENT:
            print_token("TQUERIEDIDENT");
            break;
        case INTLITERAL:
            print_token("INTLITERAL");
            break;
        case REALLITERAL:
            print_token("REALLITERAL");
            break;
        case IMAGLITERAL:
            print_token("IMAGLITERAL");
            break;
        case STRINGLITERAL:
            print_token("STRINGLITERAL");
            break;
        case BYTESLITERAL:
            print_token("BYTESLITERAL");
            break;
        case CSTRINGLITERAL:
            print_token("CSTRINGLITERAL");
            break;
        case EXTERNCODE:
            print_token("EXTERNCODE");
            break;
        case TALIGN:
            print_token("TALIGN");
            break;
        case TAS:
            print_token("TAS");
            break;
        case TATOMIC:
            print_token("TATOMIC");
            break;
        case TBEGIN:
            print_token("TBEGIN");
            break;
        case TBREAK:
            print_token("TBREAK");
            break;
        case TBOOL:
            print_token("TBOOL");
            break;
        case TBORROWED:
            print_token("TBORROWED");
            break;
        case TBY:
            print_token("TBY");
            break;
        case TBYTES:
            print_token("TBYTES");
            break;
        case TCATCH:
            print_token("TCATCH");
            break;
        case TCLASS:
            print_token("TCLASS");
            break;
        case TCOBEGIN:
            print_token("TCOBEGIN");
            break;
        case TCOFORALL:
            print_token("TCOFORALL");
            break;
        case TCOMPLEX:
            print_token("TCOMPLEX");
            break;
        case TCONFIG:
            print_token("TCONFIG");
            break;
        case TCONST:
            print_token("TCONST");
            break;
        case TCONTINUE:
            print_token("TCONTINUE");
            break;
        case TDEFER:
            print_token("TDEFER");
            break;
        case TDELETE:
            print_token("TDELETE");
            break;
        case TDMAPPED:
            print_token("TDMAPPED");
            break;
        case TDO:
            print_token("TDO");
            break;
        case TDOMAIN:
            print_token("TDOMAIN");
            break;
        case TELSE:
            print_token("TELSE");
            break;
        case TENUM:
            print_token("TENUM");
            break;
        case TEXCEPT:
            print_token("TEXCEPT");
            break;
        case TEXPORT:
            print_token("TEXPORT");
            break;
        case TEXTERN:
            print_token("TEXTERN");
            break;
        case TFALSE:
            print_token("TFALSE");
            break;
        case TFOR:
            print_token("TFOR");
            break;
        case TFORALL:
            print_token("TFORALL");
            break;
        case TFORWARDING:
            print_token("TFORWARDING");
            break;
        case TIF:
            print_token("TIF");
            break;
        case TIMAG:
            print_token("TIMAG");
            break;
        case TIMPORT:
            print_token("TIMPORT");
            break;
        case TIN:
            print_token("TIN");
            break;
        case TINCLUDE:
            print_token("TINCLUDE");
            break;
        case TINDEX:
            print_token("TINDEX");
            break;
        case TINLINE:
            print_token("TINLINE");
            break;
        case TINOUT:
            print_token("TINOUT");
            break;
        case TINT:
            print_token("TINT");
            break;
        case TITER:
            print_token("TITER");
            break;
        case TINITEQUALS:
            print_token("TINITEQUALS");
            break;
        case TLABEL:
            print_token("TLABEL");
            break;
        case TLAMBDA:
            print_token("TLAMBDA");
            break;
        case TLET:
            print_token("TLET");
            break;
        case TLIFETIME:
            print_token("TLIFETIME");
            break;
        case TLOCAL:
            print_token("TLOCAL");
            break;
        case TLOCALE:
            print_token("TLOCALE");
            break;
        case TMINUSMINUS:
            print_token("TMINUSMINUS");
            break;
        case TMODULE:
            print_token("TMODULE");
            break;
        case TNEW:
            print_token("TNEW");
            break;
        case TNIL:
            print_token("TNIL");
            break;
        case TNOINIT:
            print_token("TNOINIT");
            break;
        case TNONE:
            print_token("TNONE");
            break;
        case TNOTHING:
            print_token("TNOTHING");
            break;
        case TON:
            print_token("TON");
            break;
        case TONLY:
            print_token("TONLY");
            break;
        case TOTHERWISE:
            print_token("TOTHERWISE");
            break;
        case TOUT:
            print_token("TOUT");
            break;
        case TOVERRIDE:
            print_token("TOVERRIDE");
            break;
        case TOWNED:
            print_token("TOWNED");
            break;
        case TPARAM:
            print_token("TPARAM");
            break;
        case TPLUSPLUS:
            print_token("TPLUSPLUS");
            break;
        case TPRAGMA:
            print_token("TPRAGMA");
            break;
        case TPRIMITIVE:
            print_token("TPRIMITIVE");
            break;
        case TPRIVATE:
            print_token("TPRIVATE");
            break;
        case TPROC:
            print_token("TPROC");
            break;
        case TPROTOTYPE:
            print_token("TPROTOTYPE");
            break;
        case TPUBLIC:
            print_token("TPUBLIC");
            break;
        case TREAL:
            print_token("TREAL");
            break;
        case TRECORD:
            print_token("TRECORD");
            break;
        case TREDUCE:
            print_token("TREDUCE");
            break;
        case TREF:
            print_token("TREF");
            break;
        case TREQUIRE:
            print_token("TREQUIRE");
            break;
        case TRETURN:
            print_token("TRETURN");
            break;
        case TSCAN:
            print_token("TSCAN");
            break;
        case TSELECT:
            print_token("TSELECT");
            break;
        case TSERIAL:
            print_token("TSERIAL");
            break;
        case TSHARED:
            print_token("TSHARED");
            break;
        case TSINGLE:
            print_token("TSINGLE");
            break;
        case TSPARSE:
            print_token("TSPARSE");
            break;
        case TSTRING:
            print_token("TSTRING");
            break;
        case TSUBDOMAIN:
            print_token("TSUBDOMAIN");
            break;
        case TSYNC:
            print_token("TSYNC");
            break;
        case TTHEN:
            print_token("TTHEN");
            break;
        case TTHIS:
            print_token("TTHIS");
            break;
        case TTHROW:
            print_token("TTHROW");
            break;
        case TTHROWS:
            print_token("TTHROWS");
            break;
        case TTRUE:
            print_token("TTRUE");
            break;
        case TTRY:
            print_token("TTRY");
            break;
        case TTRYBANG:
            print_token("TTRYBANG");
            break;
        case TTYPE:
            print_token("TTYPE");
            break;
        case TUINT:
            print_token("TUINT");
            break;
        case TUNDERSCORE:
            print_token("TUNDERSCORE");
            break;
        case TUNION:
            print_token("TUNION");
            break;
        case TUNMANAGED:
            print_token("TUNMANAGED");
            break;
        case TUSE:
            print_token("TUSE");
            break;
        case TVAR:
            print_token("TVAR");
            break;
        case TVOID:
            print_token("TVOID");
            break;
        case TWHEN:
            print_token("TWHEN");
            break;
        case TWHERE:
            print_token("TWHERE");
            break;
        case TWHILE:
            print_token("TWHILE");
            break;
        case TWITH:
            print_token("TWITH");
            break;
        case TYIELD:
            print_token("TYIELD");
            break;
        case TZIP:
            print_token("TZIP");
            break;
        case TALIAS:
            print_token("TALIAS");
            break;
        case TAND:
            print_token("TAND");
            break;
        case TASSIGN:
            print_token("TASSIGN");
            break;
        case TASSIGNBAND:
            print_token("TASSIGNBAND");
            break;
        case TASSIGNBOR:
            print_token("TASSIGNBOR");
            break;
        case TASSIGNBXOR:
            print_token("TASSIGNBXOR");
            break;
        case TASSIGNDIVIDE:
            print_token("TASSIGNDIVIDE");
            break;
        case TASSIGNEXP:
            print_token("TASSIGNEXP");
            break;
        case TASSIGNLAND:
            print_token("TASSIGNLAND");
            break;
        case TASSIGNLOR:
            print_token("TASSIGNLOR");
            break;
        case TASSIGNMINUS:
            print_token("TASSIGNMINUS");
            break;
        case TASSIGNMOD:
            print_token("TASSIGNMOD");
            break;
        case TASSIGNMULTIPLY:
            print_token("TASSIGNMULTIPLY");
            break;
        case TASSIGNPLUS:
            print_token("TASSIGNPLUS");
            break;
        case TASSIGNREDUCE:
            print_token("TASSIGNREDUCE");
            break;
        case TASSIGNSL:
            print_token("TASSIGNSL");
            break;
        case TASSIGNSR:
            print_token("TASSIGNSR");
            break;
        case TBANG:
            print_token("TBANG");
            break;
        case TBAND:
            print_token("TBAND");
            break;
        case TBNOT:
            print_token("TBNOT");
            break;
        case TBOR:
            print_token("TBOR");
            break;
        case TBXOR:
            print_token("TBXOR");
            break;
        case TCOLON:
            print_token("TCOLON");
            break;
        case TCOMMA:
            print_token("TCOMMA");
            break;
        case TDIVIDE:
            print_token("TDIVIDE");
            break;
        case TDOT:
            print_token("TDOT");
            break;
        case TDOTDOT:
            print_token("TDOTDOT");
            break;
        case TDOTDOTDOT:
            print_token("TDOTDOTDOT");
            break;
        case TEQUAL:
            print_token("TEQUAL");
            break;
        case TEXP:
            print_token("TEXP");
            break;
        case TGREATER:
            print_token("TGREATER");
            break;
        case TGREATEREQUAL:
            print_token("TGREATEREQUAL");
            break;
        case THASH:
            print_token("THASH");
            break;
        case TIO:
            print_token("TIO");
            break;
        case TLESS:
            print_token("TLESS");
            break;
        case TLESSEQUAL:
            print_token("TLESSEQUAL");
            break;
        case TMINUS:
            print_token("TMINUS");
            break;
        case TMOD:
            print_token("TMOD");
            break;
        case TNOTEQUAL:
            print_token("TNOTEQUAL");
            break;
        case TOR:
            print_token("TOR");
            break;
        case TPLUS:
            print_token("TPLUS");
            break;
        case TQUESTION:
            print_token("TQUESTION");
            break;
        case TSEMI:
            print_token("TSEMI");
            break;
        case TSHIFTLEFT:
            print_token("TSHIFTLEFT");
            break;
        case TSHIFTRIGHT:
            print_token("TSHIFTRIGHT");
            break;
        case TSTAR:
            print_token("TSTAR");
            break;
        case TSWAP:
            print_token("TSWAP");
            break;
        case TLCBR:
            print_token("TLCBR");
            break;
        case TRCBR:
            print_token("TRCBR");
            break;
        case TLP:
            print_token("TLP");
            break;
        case TRP:
            print_token("TRP");
            break;
        case TLSBR:
            print_token("TLSBR");
            break;
        case TRSBR:
            print_token("TRSBR");
            break;
        case TNOELSE:
            print_token("TNOELSE");
            break;
        case TDOTDOTOPENHIGH:
            print_token("TDOTDOTOPENHIGH");
            break;
        case TUMINUS:
            print_token("TUMINUS");
            break;
        case TUPLUS:
            print_token("TUPLUS");
            break;
        case TLNOT:
            print_token("TLNOT");
            break;
        default:
            print_token("<INVALID>"); 
    }
}

inline void print_token(const char* s) {
    std::cout << " " << s << " ";
}