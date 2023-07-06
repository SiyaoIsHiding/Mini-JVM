//
//  ByteCode.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 3/7/2023.
//

#ifndef ByteCode_hpp
#define ByteCode_hpp
#include "../OOP/CodeAttributeInfo.hpp"
#include "../OOP/MethodInfo.hpp"
#include <stdio.h>

class ByteCodeStream {
    MethodInfo* belongMethod;
    CodeAttributeInfo* belongAttribute;
    int length;
    int index;
    char* codes;

public:
    MethodInfo* getBelongMethod() const;
    void setBelongMethod(MethodInfo* belongMethod);
    CodeAttributeInfo* getBelongAttribute() const;
    void setBelongAttribute(CodeAttributeInfo* belongAttribute);
    int getLength() const;
    void setLength(int length);
    int getIndex() const;
    void setIndex(int index);
    char* getCodes() const;
    void setCodes(char* codes);
};

#endif /* ByteCode_hpp */
