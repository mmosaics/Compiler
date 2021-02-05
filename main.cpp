#include <iostream>
#include <array>
#include "utils/command/CommandInvoker.h"
#include <memory>

union Value {
    int intVal;
    double doubleVal;

    explicit Value(int intVal) : intVal(intVal) {}

    explicit Value(double doubleVal) : doubleVal(doubleVal) {}
};

class A {
private:
    union Value v;

public:
    A(const Value &v) : v(v) {}

    const Value &getV() const {
        return v;
    }

    void setV(const Value &v) {
        A::v = v;
    }
};

int main() {
    Value v{5};

    return 0;
}
