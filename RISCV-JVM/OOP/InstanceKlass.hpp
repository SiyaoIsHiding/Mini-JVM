//
//  InstanceKlass.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#ifndef InstanceKlass_hpp
#define InstanceKlass_hpp

#include "ConstantPool.hpp"
#include "MethodInfo.hpp"
#include "string"
#include <stdio.h>
#define MAGIC 0xCAFEBABE

class InterfaceInfo {
    short constanPoolInd;
    std::string interfaceName;

public:
    InterfaceInfo(short ind, const std::string& name);
    InterfaceInfo();
};

class FieldInfo {
    short accessFlag;
    short nameInd;
    short descriptorInd;
    short attributeCnt;

public:
    FieldInfo();
    FieldInfo(short accessFlag, short nameInd, short descriptorInd, short attributeCnt);
    short getAccessFlag() const;
    short getNameInd() const;
    short getDescriptorInd() const;
    short getAttributeCnt() const;
    void setAccessFlag(short flag);
    void setNameInd(short ind);
    void setDescriptorInd(short ind);
    void setAttributeCnt(short cnt);
};

class InstanceKlass {
    int magic;
    short majorVersion;
    short minorVersion;
    ConstantPool* constantPool;
    short accessFlag;
    short thisClass;
    short superClassName;
    InterfaceInfo* interfaces;
    short fieldCnt;
    FieldInfo* fields;
    short methodCnt;
    MethodInfo* methods;

public:
    int getMagic() const;
    void setMagic(int magic);
    short getMajorVersion() const;
    void setMajorVersion(short version);
    short getMinorVersion() const;
    void setMinorVersion(short version);
    ConstantPool* getConstantPool() const;
    void setConstantPool(ConstantPool* pool);
    short getAccessFlag() const;
    void setAccessFlag(short flag);
    short getThisClass() const;
    void setThisClass(short thisClassInd);
    short getSuperClassName() const;
    void setSuperClassName(short name);
    InterfaceInfo* getInterfaces() const;
    void setInterfaces(InterfaceInfo* interfaces);
    FieldInfo* getFields() const;
    void setFields(FieldInfo* fields);
    MethodInfo* getMethods() const;
    void setMethods(MethodInfo* methods);
    short getFieldCnt() const;
    void setFieldCnt(short cnt);
    short getMethodCnt() const;
    void setMethodCnt(short cnt);
};

#endif /* InstanceKlass_hpp */
