//
//  ConstantPool.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 30/6/2023.
//

#ifndef ConstantPool_hpp
#define ConstantPool_hpp

#include <map>
#include <string>

class ConstantPool {
public:
    short count;
    char* tag; // type of the constant
    std::map<int, char*> data;
    std::string getClassNameByFieldInd(unsigned short index);
    std::string getFieldNameByFieldInd(unsigned short index);
};

#endif /* ConstantPool_hpp */
