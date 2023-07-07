//
//  MethodInfo.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 3/7/2023.
//

#include "MethodInfo.hpp"
#include "InstanceKlass.hpp"
short MethodInfo::getAccessFlag() const
{
    return accessFlag;
}

short MethodInfo::getNameInd() const
{
    return nameInd;
}

std::string MethodInfo::getName() const
{
    return name;
}

short MethodInfo::getDescriptorInd() const
{
    return descriptorInd;
}

short MethodInfo::getAttributeCnt() const
{
    return attributeCnt;
}

CodeAttributeInfo* MethodInfo::getAttributes() const
{
    return attributes;
}

void MethodInfo::setAccessFlag(short accessFlag)
{
    this->accessFlag = accessFlag;
}

void MethodInfo::setNameInd(short nameInd)
{
    this->nameInd = nameInd;
}

void MethodInfo::setName(const std::string& name)
{
    this->name = name;
}

void MethodInfo::setDescriptorInd(short descriptorInd)
{
    this->descriptorInd = descriptorInd;
}

void MethodInfo::setAttributeCnt(short attributeCnt)
{
    this->attributeCnt = attributeCnt;
}

void MethodInfo::setAttributes(CodeAttributeInfo* attributes)
{
    this->attributes = attributes;
}

void MethodInfo::setAttributes(CodeAttributeInfo* attribute, int ind)
{
    MethodInfo::attributes[ind] = *attribute;
}

InstanceKlass *MethodInfo::getBelongKlass() const { 
    return belongKlass;
}

void MethodInfo::setBelongKlass(InstanceKlass *klass) { 
    this->belongKlass = klass;
}

