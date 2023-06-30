//
//  ClassFileParser.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#ifndef ClassFileParser_hpp
#define ClassFileParser_hpp

#include <stdio.h>
#include "../OOP/InstanceKlass.hpp"
#include "../Stream/ClassReader.hpp"
class ClassFileParser{
public:
    static InstanceKlass* Parser(ClassReader *classReader);
    static void checkAndPutMagic(ClassReader *classReader, InstanceKlass *klass);
};

#endif /* ClassFileParser_hpp */
