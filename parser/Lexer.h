//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_LEXER_H
#define COMPILER_LEXER_H

#include "Token.h"
#include <memory>

class Lexer {
public:
    virtual void scan() = 0;
    virtual std::shared_ptr<Token> token() = 0;
    virtual ~Lexer() = default;
};


#endif //COMPILER_LEXER_H
