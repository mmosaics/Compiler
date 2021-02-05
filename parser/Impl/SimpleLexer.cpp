//
// Created by hlr on 2021/2/3.
//

#include "SimpleLexer.h"

void SimpleLexer::scan() {

}

SimpleLexer::SimpleLexer(std::string sourceFile) {
    Infile = fopen(sourceFile.c_str(), "r");
    TextLimit = 32;
}



