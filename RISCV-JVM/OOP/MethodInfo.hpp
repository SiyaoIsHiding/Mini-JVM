//
//  MethodInfo.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 3/7/2023.
//

#ifndef MethodInfo_hpp
#define MethodInfo_hpp

#include "CodeAttributeInfo.hpp"
#include "string"
#include <stdio.h>

class InstanceKlass;
class MethodInfo {
    InstanceKlass* belongKlass;
    short accessFlag;
    short nameInd;
    std::string name;
    short descriptorInd;
    short attributeCnt;
    CodeAttributeInfo* attributes;

public:
    short getAccessFlag() const;
    short getNameInd() const;
    std::string getName() const;
    short getDescriptorInd() const;
    short getAttributeCnt() const;
    CodeAttributeInfo* getAttributes() const;
    void setAccessFlag(short accessFlag);
    void setNameInd(short nameInd);
    void setName(const std::string& name);
    void setDescriptorInd(short descriptorInd);
    void setAttributeCnt(short attributeCnt);
    void setAttributes(CodeAttributeInfo* attributes);
    void setAttributes(CodeAttributeInfo* attribute, int ind);
};

#endif /* MethodInfo_hpp */
