//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_COMMAND_H
#define COMPILER_COMMAND_H

//Command Interface
class Command {
public:
    virtual void execute() = 0;
    virtual ~Command() = 0;
};

#endif //COMPILER_COMMAND_H
