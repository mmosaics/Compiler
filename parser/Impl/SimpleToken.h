//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_SIMPLETOKEN_H
#define COMPILER_SIMPLETOKEN_H

#include "../Token.h"

class SimpleToken : public Token {
private:
    TokenType tokenType;
    TokenValue val;

public:

    TokenType type() override;

    void setType(TokenType type) override;

    TokenValue value() override;

    void setValue(TokenValue value) override;

};


#endif //COMPILER_SIMPLETOKEN_H
