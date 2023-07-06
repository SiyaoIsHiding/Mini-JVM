//
//  CodeAttributeInfo.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 3/7/2023.
//

#include "CodeAttributeInfo.hpp"

short CodeAttributeInfo::getNameInd() const
{
    return nameInd;
}

void CodeAttributeInfo::setNameInd(short nameInd)
{
    CodeAttributeInfo::nameInd = nameInd;
}

std::string CodeAttributeInfo::getName() const
{
    return name;
}

void CodeAttributeInfo::setName(std::string name)
{
    CodeAttributeInfo::name = name;
}

short CodeAttributeInfo::getMaxStack() const
{
    return maxStack;
}

void CodeAttributeInfo::setMaxStack(short maxStack)
{
    CodeAttributeInfo::maxStack = maxStack;
}

short CodeAttributeInfo::getMaxLocals() const
{
    return maxLocals;
}

void CodeAttributeInfo::setMaxLocals(short maxLocals)
{
    CodeAttributeInfo::maxLocals = maxLocals;
}

int CodeAttributeInfo::getCodeLen() const
{
    return codeLen;
}

void CodeAttributeInfo::setCodeLen(int codeLen)
{
    CodeAttributeInfo::codeLen = codeLen;
}

ByteCodeStream* CodeAttributeInfo::getCodes() const
{
    return codes;
}

void CodeAttributeInfo::setCodes(ByteCodeStream* codes)
{
    CodeAttributeInfo::codes = codes;
}
