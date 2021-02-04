//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_LEXER_H
#define COMPILER_LEXER_H

#include "Token.h"

class Lexer {
public:
    virtual void scan() = 0;
    virtual Token token() = 0;
    virtual ~Lexer() = 0;
};


#endif //COMPILER_LEXER_H
