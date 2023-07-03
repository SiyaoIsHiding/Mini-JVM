//
//  ConstantPool.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 30/6/2023.
//

#ifndef ConstantPool_hpp
#define ConstantPool_hpp

#include <stdio.h>
#include <map>

class ConstantPool{
public:
    short count;
    char* tag; // type of the constant
    std::map<int, char*> data;
};

#endif /* ConstantPool_hpp */
