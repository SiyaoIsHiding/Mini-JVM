//
//  LocalVariableTable.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 5/7/2023.
//

#include "LocalVariableTable.hpp"

short LocalVariableTable::getTableLen() const
{
    return tableLen;
}

void LocalVariableTable::setTableLen(short tableLen)
{
    LocalVariableTable::tableLen = tableLen;
}

short LocalVariableTable::Item::getStartPc() const
{
    return startPc;
}

void LocalVariableTable::Item::setStartPc(short startPc)
{
    Item::startPc = startPc;
}

short LocalVariableTable::Item::getLength() const
{
    return length;
}

void LocalVariableTable::Item::setLength(short length)
{
    Item::length = length;
}

short LocalVariableTable::Item::getNameInd() const
{
    return nameInd;
}

void LocalVariableTable::Item::setNameInd(short nameInd)
{
    Item::nameInd = nameInd;
}

short LocalVariableTable::Item::getDescriptorInd() const
{
    return descriptorInd;
}

void LocalVariableTable::Item::setDescriptorInd(short descriptorInd)
{
    Item::descriptorInd = descriptorInd;
}

short LocalVariableTable::Item::getInd() const
{
    return ind;
}

void LocalVariableTable::Item::setInd(short ind)
{
    Item::ind = ind;
}
