//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_PARSER_H
#define COMPILER_PARSER_H

#include <memory>
#include "Lexer.h"
#include "../ast/Node.h"

class Parser {
public:
    virtual std::unique_ptr<AST> parse() = 0;
    virtual ~Parser() = 0;
};


#endif //COMPILER_PARSER_H
