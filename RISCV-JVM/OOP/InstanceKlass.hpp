//
//  InstanceKlass.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#ifndef InstanceKlass_hpp
#define InstanceKlass_hpp

#include "ConstantPool.hpp"
#include "string"
#include <stdio.h>
#define MAGIC 0xCAFEBABE

class InterfaceInfo{
    short constanPoolInd;
    std::string interfaceName;
public:
    InterfaceInfo(short ind, const std::string &name);
    InterfaceInfo();
};

class FieldsInfo{
    short accessFlag;
    short nameInd;
    short descriptorInd;
    short attributeCnt;
public:
    FieldsInfo();
    FieldsInfo(short accessFlag, short nameInd, short descriptorInd, short attributeCnt);
};

class InstanceKlass {
    int magic;
    short majorVersion;
    short minorVersion;
    ConstantPool* constantPool;
    short accessFlag;
    short className;
    short superClassName;
    InterfaceInfo* interfaces;
    FieldsInfo* fields;

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
    short getClassName() const;
    void setClassName(short name);
    short getSuperClassName() const;
    void setSuperClassName(short name);
    InterfaceInfo* getInterfaces() const;
    void setInterfaces(InterfaceInfo* interfaces);
    FieldsInfo* getFields() const;
    void setFields(FieldsInfo *fields);
};


#endif /* InstanceKlass_hpp */
