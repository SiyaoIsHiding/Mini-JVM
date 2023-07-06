//
//  ClassLoader.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 5/7/2023.
//

#ifndef ClassLoader_hpp
#define ClassLoader_hpp

#include "../OOP/InstanceKlass.hpp"
#include "ClassFileParser.hpp"
#include "map"
#include "string"
#include <stdio.h>
class ClassLoader {
public:
    static std::string pathPrefix;
    static std::map<std::string, InstanceKlass*> allClasses;
    static InstanceKlass* loadClass(std::string path);
};

#endif /* ClassLoader_hpp */
