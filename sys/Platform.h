//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_PLATFORM_H
#define COMPILER_PLATFORM_H

#include <memory>
#include "CodeGenerator.h"
#include "Assembler.h"
#include "Linker.h"

class Platform {
    std::shared_ptr<CodeGenerator> codeGenerator;
    std::shared_ptr<Assembler> assembler;
    std::shared_ptr<Linker> linker;
};

#endif //COMPILER_PLATFORM_H
