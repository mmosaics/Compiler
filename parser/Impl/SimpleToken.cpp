//
// Created by hlr on 2021/2/3.
//

#include "SimpleToken.h"

TokenType SimpleToken::type() {
    return tokenType;
}

void SimpleToken::setType(TokenType type) {
    SimpleToken::tokenType = type;
}

int SimpleToken::value() {
    return val;
}

void SimpleToken::setValue(int value) {
    val = value;
}
