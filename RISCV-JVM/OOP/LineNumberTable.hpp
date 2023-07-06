//
//  LineNumberTable.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 4/7/2023.
//

#ifndef LineNumberTable_hpp
#define LineNumberTable_hpp

#include "AttributeInfo.hpp"
#include "string"
#include <stdio.h>
class LineNumberTable : public AttributeInfo {
public:
    class Item {
        short startPc;
        short lineNum;

    public:
        short getStartPc() const;
        void setStartPc(short startPc);
        short getLineNum() const;
        void setLineNum(short lineNum);
    };

private:
    short tableLen;

public:
    Item* table;
    short getTableLen() const;
    void setTableLen(short tableLen);
};

#endif /* LineNumberTable_hpp */
