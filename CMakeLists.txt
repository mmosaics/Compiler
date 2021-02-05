cmake_minimum_required(VERSION 3.16)
project(compiler)

set(CMAKE_CXX_STANDARD 17)

add_executable(compiler main.cpp parser/Lexer.h parser/Token.h compiler/Compiler.cpp compiler/Compiler.h compiler/Options.cpp compiler/Options.h parser/Parser.h ast/Node.h ast/AST.h parser/TokenType.h utils/command/CommandInvoker.cpp utils/command/CommandInvoker.h utils/command/Command.h parser/Impl/SimpleLexer.cpp parser/Impl/SimpleLexer.h parser/Impl/SimpleToken.cpp parser/Impl/SimpleToken.h parser/Impl/TopDownParser.cpp parser/Impl/TopDownParser.h sys/Platform.h sys/Assembler.h sys/Linker.h sys/CodeGenerator.h utils/command/CommandUtils.cpp utils/command/CommandUtils.h sys/Impl/X86Linux.cpp sys/Impl/X86Linux.h parser/TokenValue.h sys/Impl/GNUAssembler.cpp sys/Impl/GNUAssembler.h sys/Impl/GNULinker.cpp sys/Impl/GNULinker.h sys/Impl/GNUCodeGenerator.cpp sys/Impl/GNUCodeGenerator.h)