//
//  ClassFileParser.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#ifndef ClassFileParser_hpp
#define ClassFileParser_hpp

#include "../OOP/InstanceKlass.hpp"
#include "../Stream/ClassReader.hpp"
#include <stdio.h>
class ClassFileParser {
public:
    static InstanceKlass *Parser(ClassReader *classReader);
    static void putMagic(ClassReader *classReader, InstanceKlass *klass);
    static void putMajorVersion(ClassReader *classReader, InstanceKlass *klass);
    static void putMinorVersion(ClassReader *classReader, InstanceKlass *klass);
};

#endif /* ClassFileParser_hpp */
