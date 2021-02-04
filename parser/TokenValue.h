//
// Created by hlr on 2021/2/4.
//

#ifndef COMPILER_TOKENVALUE_H
#define COMPILER_TOKENVALUE_H


union TokenValue {
    int id;
    int intVal;
    double doubleVal;

    TokenValue(int i, bool isId) {
        if(isId)
            id = i;
        else
            intVal = i;
    }

    explicit TokenValue(double doubleVal) : doubleVal(doubleVal) {}

    int getId() const {
        return id;
    }

    void setId(int id) {
        TokenValue::id = id;
    }

    int getIntVal() const {
        return intVal;
    }

    void setIntVal(int intVal) {
        TokenValue::intVal = intVal;
    }

    double getDoubleVal() const {
        return doubleVal;
    }

    void setDoubleVal(double doubleVal) {
        TokenValue::doubleVal = doubleVal;
    }

};


#endif //COMPILER_TOKENVALUE_H
