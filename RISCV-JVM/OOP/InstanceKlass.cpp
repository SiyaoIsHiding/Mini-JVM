//
//  InstanceKlass.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#include "InstanceKlass.hpp"
#include "ConstantPool.hpp"

int InstanceKlass::getMagic() const { return InstanceKlass::magic; }

void InstanceKlass::setMagic(int magic)
{
    if (magic != MAGIC) {
        throw 505;
    }
    InstanceKlass::magic = magic;
}

short InstanceKlass::getMajorVersion() const
{
    return InstanceKlass::majorVersion;
}

void InstanceKlass::setMajorVersion(short version)
{
    InstanceKlass::majorVersion = version;
}

short InstanceKlass::getMinorVersion() const
{
    return InstanceKlass::minorVersion;
}

void InstanceKlass::setMinorVersion(short version)
{
    InstanceKlass::minorVersion = version;
}

ConstantPool* InstanceKlass::getConstantPool() const
{
    return InstanceKlass::constantPool;
}

void InstanceKlass::setConstantPool(ConstantPool* pool)
{
    InstanceKlass::constantPool = pool;
}

short InstanceKlass::getAccessFlag() const { 
    return accessFlag;
}

void InstanceKlass::setAccessFlag(short flag) { 
    accessFlag = flag;
}

short InstanceKlass::getClassName() const { 
    return className;
}

void InstanceKlass::setClassName(short name) { 
    className = name;
}

short InstanceKlass::getSuperClassName() const { 
    return superClassName;
}

void InstanceKlass::setSuperClassName(short name) { 
    superClassName = name;
}

InterfaceInfo *InstanceKlass::getInterfaces() const { 
    return interfaces;
}

void InstanceKlass::setInterfaces(InterfaceInfo *interfaces) {
    InstanceKlass::interfaces = interfaces;
}

FieldsInfo* InstanceKlass::getFields() const {
    return fields;
}

void InstanceKlass::setFields(FieldsInfo *fields){
    InstanceKlass::fields = fields;
}

InterfaceInfo::InterfaceInfo(){}
InterfaceInfo::InterfaceInfo(short ind, const std::string &name){
    constanPoolInd = ind;
    interfaceName = name;
}

FieldsInfo::FieldsInfo() {}

FieldsInfo::FieldsInfo(short accessFlag, short nameInd, short descriptorInd, short attributeCnt) : accessFlag(accessFlag), nameInd(nameInd), descriptorInd(descriptorInd), attributeCnt(attributeCnt){
}
