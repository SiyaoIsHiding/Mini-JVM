//
//  ClassFileParser.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#ifndef ClassFileParser_hpp
#define ClassFileParser_hpp

#include "../OOP/CodeAttributeInfo.hpp"
#include "../OOP/InstanceKlass.hpp"
#include "../OOP/LineNumberTable.hpp"
#include "../OOP/LocalVariableTable.hpp"
#include "../OOP/MethodInfo.hpp"
#include "../Stream/ClassReader.hpp"
#include "../Util/Constants.hpp"
#include <stdio.h>
class ClassFileParser {
    static void putMagic(ClassReader* classReader, InstanceKlass* klass);
    static void putMajorVersion(ClassReader* classReader, InstanceKlass* klass);
    static void putMinorVersion(ClassReader* classReader, InstanceKlass* klass);
    static void putConstantPool(ClassReader* classReader, InstanceKlass* klass);
    static void putAccessFlag(ClassReader* classReader, InstanceKlass* klass);
    static void putClassNames(ClassReader* classReader, InstanceKlass* klass);
    static void putInterfaces(ClassReader* classReader, InstanceKlass* klass);
    static void putFields(ClassReader* classReader, InstanceKlass* klass);
    static void putMethods(ClassReader* classReader, InstanceKlass* klass);
    static void parseLineNumberTable(ClassReader* classReader, InstanceKlass* klass, CodeAttributeInfo* cdoeAttribute, short nameInd, std::string attributeName);
    static void parseLocalVariableTable(ClassReader* classReader, InstanceKlass* klass, CodeAttributeInfo* codeAttribute, short nameInd, std::string attributeName);

public:
    static InstanceKlass* Parser(ClassReader* classReader);
};

#endif /* ClassFileParser_hpp */
