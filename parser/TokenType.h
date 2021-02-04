//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_TOKENTYPE_H
#define COMPILER_TOKENTYPE_H

enum class TokenType : int {
    T_EOF,
    T_PLUS, T_MINUS,
    T_STAR, T_SLASH,
    T_EQ, T_NE,
    T_LT, T_GT, T_LE, T_GE,
    T_INTLIT, T_SEMI, T_ASSIGN, T_IDENT,
    //Keyword
    T_PRINT, T_INT
};

#endif //COMPILER_TOKENTYPE_H
