// Auto-generated by tools/scripts/generate_tokens.py
// NOT for inclusion in any program

#if 0
// Token Types 
#ifndef HAZEL_TOKEN_H
#define HAZEL_TOKEN_H

#ifdef __cplusplus
extern "C" {
#endif

#define EOF,            0
#define ERROR,          1
#define COMMENT,        2
#define WHITESPACE,     3
#define IDENTIFIER,     4
#define AT_SIGN,        5
#define COMMA,          6
#define SEMICOLON,      7
#define KEYWORD,        8
#define BEGIN,          9
#define BREAK,          10
#define CASE,           11
#define CATCH,          12
#define CONST,          13
#define CONTINUE,       14
#define DO,             15
#define DEF,            16
#define DEFAULT,        17
#define ELSE,           18
#define ELSEIF,         19
#define END,            20
#define EXPORT,         21
#define FINALLY,        22
#define FOR,            23
#define GLOBAL          24
#define IF,             25
#define IMPORT,         26
#define INCLUDE,        27
#define MACRO,          28
#define MATCH,          29
#define MODULE,         30
#define MUTABLE,        31
#define NEW             32
#define RANGE,          33
#define RETURN,         34
#define STRUCT,         35
#define TRY,            36
#define TYPE,           37
#define USE,            38
#define WHERE,          39
#define WHILE,          40
#define INVISIBLE_BRACKETS, 41
#define NOTHING,        42
#define WS,             43
#define SEMICOLON_WS,   44
#define NEWLINE_WS,     45
#define EMPTY_WS,       46
#define LITERAL,        47
#define INTEGER,        48
#define BIN_INT,        49
#define HEX_INT,        50
#define FLOAT,          51
#define STRING,         52
#define IMAG,           53
#define TRIPLE_STRING,  54
#define CHAR,           55
#define TRUE,           56
#define FALSE,          57
#define ADD,            58
#define SUB,            59
#define MUTLIPLICATION, 60
#define QUOTIENT,       61
#define REM,            62
#define AND,            63
#define OR,             64
#define NOT,            65
#define XOR,            66
#define AND_NOT,        67
#define LAND,           68
#define LOR,            69
#define INCREMENT,      70
#define DECREMENT,      71
#define GREATER,        72
#define LESS,           73
#define GREATER_THAN,   74
#define GREATER_THAN_OR_EQUAL_TO, 75
#define LESS_THAN,      76
#define LESS_THAN_OR_EQUAL_TO, 77
#define DOUBLEEQUALS,   78
#define NOT_EQUALS,     79
#define NOT_EQUAL_TO,   80
#define IN,             81
#define ISA,            82
#define LBRACK,         83
#define RBRACK,         84
#define LBRACE,         85
#define RBRACE,         86
#define LPAREN,         87
#define RPAREN,         88
#define EQUALS,         89
#define PLUS_EQUALS,    90
#define MINUS_EQUALS,   91
#define START_EQUALS,   92
#define OR_EQUALS,      93
#define DIVISION_EQUALS, 94
#define FWD_SLASH_EQUALS, 95
#define REM_EQUALS,     96
#define LBITSHIFT_EQUALS, 97
#define RBITSHIFT_EQUALS, 98
#define AND_EQUALS,     99
#define APPROX,         100
#define COLON,          101
#define DOT,            102
#define DDOT,           103
#define ELLIPSIS,       104
#define LBITSHIFT,      105
#define RBITSHIFT,      106
#define CONDITIONAL,    107
#define PAIR_ARROWS,    108
#define ANON_FUNC,      109
#define LEFT_ARROW,     110
#define LEFTWARDS_ARROW, 111
#define RIGHTWARDS_ARROW, 112
#define HALFWIDTH_LEFTWARDS_ARROW, 113
#define HALFWIDTH_RIGHTWARDS_ARROW, 114
#define LONG_LEFTWARDS_ARROW, 115
#define LONG_RIGHTWARDS_ARROW, 116
#define DECLARATION,    117
#define ERRORTOKEN      118
#define N_TOKENS        119
#define NT_OFFSET       256

////////////////////////////////// SPECIAL DEFINITIONS FOR COOP WITH THE PARSER //////////////////////////////////
#define ISTERMINAL (x)        ((x) < NT_OFFSET)
#define ISNONTERMINAL (x)     ((x) >= NT_OFFSET)
#define ISEOF(x)              ((x) == ENDMARKER)
#define ISWHITESPACE(x)       ((x) == ENDMARKER || \
                               (x) == NEWLINE   || \
                               (x) == INDENT    || \
                               (x) == DEDENT)

const char* const TokenNames[]; 
int Token_OneChar(int);
int Token_TwoChars(int, int);
int Token_ThreeChars(int, int, int);

TokenNames* token_init(int type, char* value);

#ifdef __cplusplus
}
#endif

#endif 0 // if 0
#endif // HAZEL_TOKEN_H
