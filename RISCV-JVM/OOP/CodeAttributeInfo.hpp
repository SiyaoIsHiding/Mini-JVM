//
//  CodeAttributeInfo.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 3/7/2023.
//

#ifndef CodeAttributeInfo_hpp
#define CodeAttributeInfo_hpp

#include "../OOP/AttributeInfo.hpp"
#include "map"
#include "string"
#include <stdio.h>
class ByteCodeStream;
class CodeAttributeInfo {
    short nameInd;
    std::string name;
    short maxStack;
    short maxLocals;
    int codeLen;
    ByteCodeStream* codes;
    short attriCnt;
    // exception table
    // attributes
public:
    std::map<std::string, AttributeInfo*> attributes;
    short getNameInd() const;
    void setNameInd(short nameInd);
    std::string getName() const;
    void setName(std::string name);
    short getMaxStack() const;
    void setMaxStack(short maxStack);
    short getMaxLocals() const;
    void setMaxLocals(short maxLocals);
    int getCodeLen() const;
    void setCodeLen(int codeLen);
    ByteCodeStream* getCodes() const;
    void setCodes(ByteCodeStream* codes);
};

#endif /* CodeAttributeInfo_hpp */
