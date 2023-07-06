//
//  AttributeInfo.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 3/7/2023.
//

#include "AttributeInfo.hpp"

short AttributeInfo::getNameInd() const
{
    return nameInd;
}

int AttributeInfo::getLength() const
{
    return length;
}

char* AttributeInfo::getContainer() const
{
    return container;
}

void AttributeInfo::setNameInd(short nameInd)
{
    this->nameInd = nameInd;
}

void AttributeInfo::setLength(int length)
{
    this->length = length;
}

void AttributeInfo::setContainer(char* container)
{
    this->container = container;
}
