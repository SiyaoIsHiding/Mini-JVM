//
//  main.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 26/6/2023.
//

#include <iostream>
#include "Stream/ClassReader.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    ClassReader *classReader = ClassReader::readByPath("/Users/jane/Documents/CompilerConstructor/Test.class");
    printf("%X\n", classReader->read4Byte());
    return 0;
}
