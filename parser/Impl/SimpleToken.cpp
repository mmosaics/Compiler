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

TokenValue SimpleToken::value() {
    return val;
}

void SimpleToken::setValue(TokenValue value) {
    val = value;
}
