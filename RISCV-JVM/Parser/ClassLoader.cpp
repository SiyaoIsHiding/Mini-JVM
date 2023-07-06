//
//  ClassLoader.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 5/7/2023.
//

#include "ClassLoader.hpp"
#include "../Stream/ClassReader.hpp"
#include "ClassFileParser.hpp"
std::string ClassLoader::pathPrefix = "/Users/jane/Documents/CompilerConstructor/";
std::map<std::string, InstanceKlass*> ClassLoader::allClasses;

InstanceKlass* ClassLoader::loadClass(std::string path)
{
    if (ClassLoader::allClasses[path])
        return ClassLoader::allClasses[path];
    ClassReader* reader = ClassReader::readByPath(pathPrefix.append(path).append(".class"));
    InstanceKlass* klass = ClassFileParser::Parser(reader);
    ClassLoader::allClasses[path] = klass;
    return klass;
}
