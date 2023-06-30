//
//  main.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 26/6/2023.
//

#include "OOP/InstanceKlass.hpp"
#include "Parser/ClassFileParser.hpp"
#include "Stream/ClassReader.hpp"
#include <iostream>

int main(int argc, const char* argv[])
{
    // insert code here...
    ClassReader* classReader = ClassReader::readByPath(
        "/Users/jane/Documents/CompilerConstructor/Test.class");
    InstanceKlass* klass = ClassFileParser::Parser(classReader);
    printf("magic: %X\n", klass->getMagic());
    return 0;
}
