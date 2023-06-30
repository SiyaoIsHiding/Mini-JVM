//
//  main.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 26/6/2023.
//

#include <iostream>
#include "Stream/ClassReader.hpp"
#include "Parser/ClassFileParser.hpp"
#include "OOP/InstanceKlass.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    ClassReader *classReader = ClassReader::readByPath("/Users/jane/Documents/CompilerConstructor/Test.class");
    InstanceKlass* klass = ClassFileParser::Parser(classReader);
    printf("magic: %X\n", klass->getMagic());
    return 0;
}
