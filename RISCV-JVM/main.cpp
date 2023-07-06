//
//  main.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 26/6/2023.
//

#include "OOP/InstanceKlass.hpp"
#include "Parser/ClassLoader.hpp"
#include <iostream>

int main(int argc, const char* argv[])
{
    // insert code here...
    ClassLoader::loadClass("Test");
    short thisClassInd = (short)(*ClassLoader::allClasses["Test"]->getConstantPool()->data[ClassLoader::allClasses["Test"]->getThisClass()]);
    std::string name = (std::string)(ClassLoader::allClasses["Test"]->getConstantPool()->data[thisClassInd]);
    printf("class name: %s\n", name.c_str());
    return 0;
}
