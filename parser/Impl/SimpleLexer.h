//
// Created by hlr on 2021/2/3.
//

#ifndef COMPILER_SIMPLELEXER_H
#define COMPILER_SIMPLELEXER_H

#include "../Lexer.h"
#include <memory>
#include <string>

class SimpleLexer : public Lexer{
private:
    //Token just be scanned
    std::shared_ptr<Token> token;
    //Line number the lexer is scanning
    int Line = 1;
    //Putback char
    char Putback = '\n';
    //Source file pointer
    FILE *Infile;
    //Identifier name
    std::string Text;
    //Identifier length limit
    int TextLimit;

public:
    explicit SimpleLexer(std::string sourceFile);

public:
    void scan() override;

private:
    //Get next char
    int next();

    //Put back a char
    void putback(char c);

    //

};


#endif //COMPILER_SIMPLELEXER_H
