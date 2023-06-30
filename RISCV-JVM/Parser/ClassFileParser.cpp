//
//  ClassFileParser.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#include "ClassFileParser.hpp"

void ClassFileParser::putMagic(ClassReader* classReader, InstanceKlass* klass)
{
    int magic = classReader->read4Byte();
    klass->setMagic(magic);
}

InstanceKlass* ClassFileParser::Parser(ClassReader* classReader)
{
    InstanceKlass* klass = new InstanceKlass;
    putMagic(classReader, klass);
    return klass;
}
