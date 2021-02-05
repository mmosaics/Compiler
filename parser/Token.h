//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_TOKEN_H
#define COMPILER_TOKEN_H

#include "TokenType.h"
#include "TokenValue.h"

class Token {
public:
    virtual TokenType type() = 0;
    virtual void setType(TokenType type) = 0;
    virtual TokenValue value() = 0;
    virtual void setValue(TokenValue value) = 0;
    virtual ~Token() = 0;
};


#endif //COMPILER_TOKEN_H
