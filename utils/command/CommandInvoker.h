//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_COMMANDINVOKER_H
#define COMPILER_COMMANDINVOKER_H

#include <memory>
#include "Command.h"


class CommandInvoker {
private:
    std::shared_ptr<Command> command;

public:
    void setCommand(const std::shared_ptr<Command> &command);

    void executeCommand();

};


#endif //COMPILER_COMMANDINVOKER_H
