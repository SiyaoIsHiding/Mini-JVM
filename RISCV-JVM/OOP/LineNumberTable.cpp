//
//  LineNumberTable.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 4/7/2023.
//

#include "LineNumberTable.hpp"

short LineNumberTable::getTableLen() const
{
    return tableLen;
}

void LineNumberTable::setTableLen(short tableLen)
{
    LineNumberTable::tableLen = tableLen;
}

short LineNumberTable::Item::getStartPc() const
{
    return startPc;
}

void LineNumberTable::Item::setStartPc(short startPc)
{
    Item::startPc = startPc;
}

short LineNumberTable::Item::getLineNum() const
{
    return lineNum;
}

void LineNumberTable::Item::setLineNum(short lineNum)
{
    Item::lineNum = lineNum;
}
