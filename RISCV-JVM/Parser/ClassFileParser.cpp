//
//  ClassFileParser.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#include "ClassFileParser.hpp"

InstanceKlass* ClassFileParser::Parser(ClassReader* classReader)
{
    InstanceKlass* klass = new InstanceKlass;
    putMagic(classReader, klass);
    putMinorVersion(classReader, klass);
    putMajorVersion(classReader, klass);
    return klass;
}

void ClassFileParser::putMagic(ClassReader* classReader, InstanceKlass* klass)
{
    int magic = classReader->read4Byte();
    klass->setMagic(magic);
}

void ClassFileParser::putMajorVersion(ClassReader *classReader, InstanceKlass *klass) { 
    klass->setMajorVersion(classReader->read2Byte()) ;
}

void ClassFileParser::putMinorVersion(ClassReader *classReader, InstanceKlass *klass) { 
    klass->setMinorVersion(classReader->read2Byte());
}

