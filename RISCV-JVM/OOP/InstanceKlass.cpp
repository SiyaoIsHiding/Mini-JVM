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

short InstanceKlass::getAccessFlag() const
{
    return accessFlag;
}

void InstanceKlass::setAccessFlag(short flag)
{
    accessFlag = flag;
}

short InstanceKlass::getThisClass() const
{
    return thisClass;
}

void InstanceKlass::setThisClass(short thisClassInd)
{
    thisClass = thisClassInd;
}

short InstanceKlass::getSuperClassName() const
{
    return superClassName;
}

void InstanceKlass::setSuperClassName(short name)
{
    superClassName = name;
}

InterfaceInfo* InstanceKlass::getInterfaces() const
{
    return interfaces;
}

void InstanceKlass::setInterfaces(InterfaceInfo* interfaces)
{
    InstanceKlass::interfaces = interfaces;
}

FieldInfo* InstanceKlass::getFields() const
{
    return fields;
}

void InstanceKlass::setFields(FieldInfo* fields)
{
    InstanceKlass::fields = fields;
}

InterfaceInfo::InterfaceInfo() { }
InterfaceInfo::InterfaceInfo(short ind, const std::string& name)
{
    constanPoolInd = ind;
    interfaceName = name;
}

FieldInfo::FieldInfo() { }

FieldInfo::FieldInfo(short accessFlag, short nameInd, short descriptorInd, short attributeCnt)
    : accessFlag(accessFlag)
    , nameInd(nameInd)
    , descriptorInd(descriptorInd)
    , attributeCnt(attributeCnt)
{
}

short FieldInfo::getAccessFlag() const
{
    return accessFlag;
}

short FieldInfo::getNameInd() const
{
    return nameInd;
}

short FieldInfo::getDescriptorInd() const
{
    return descriptorInd;
}

short FieldInfo::getAttributeCnt() const
{
    return attributeCnt;
}

void FieldInfo::setAccessFlag(short flag)
{
    accessFlag = flag;
}

void FieldInfo::setNameInd(short ind)
{
    nameInd = ind;
}

void FieldInfo::setDescriptorInd(short ind)
{
    descriptorInd = ind;
}

void FieldInfo::setAttributeCnt(short cnt)
{
    attributeCnt = cnt;
}

MethodInfo* InstanceKlass::getMethods() const
{
    return methods;
}

void InstanceKlass::setMethods(MethodInfo* methods)
{
    this->methods = methods;
}

short InstanceKlass::getMethodCnt() const
{
    return methodCnt;
}

void InstanceKlass::setMethodCnt(short cnt)
{
    methodCnt = cnt;
}

short InstanceKlass::getFieldCnt() const
{
    return fieldCnt;
}

void InstanceKlass::setFieldCnt(short cnt)
{
    fieldCnt = cnt;
}



