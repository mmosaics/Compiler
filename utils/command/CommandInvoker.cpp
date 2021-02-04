//
// Created by hlr on 2021/2/3.
//

#include "CommandInvoker.h"

void CommandInvoker::setCommand(const std::shared_ptr<Command> &cmd) {
    this->command = cmd;
}

void CommandInvoker::executeCommand() {
    command->execute();
}
