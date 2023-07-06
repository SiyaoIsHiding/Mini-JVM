//
//  LocalVariableTable.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 5/7/2023.
//

#ifndef LocalVariableTable_hpp
#define LocalVariableTable_hpp

#include "AttributeInfo.hpp"
#include <stdio.h>
class LocalVariableTable : public AttributeInfo {
public:
    class Item {
        short startPc;
        short length;
        short nameInd;
        short descriptorInd;
        short ind;

    public:
        short getStartPc() const;
        void setStartPc(short startPc);
        short getLength() const;
        void setLength(short length);
        short getNameInd() const;
        void setNameInd(short nameInd);
        short getDescriptorInd() const;
        void setDescriptorInd(short descriptorInd);
        short getInd() const;
        void setInd(short ind);
    };

private:
    short tableLen;

public:
    Item* table;
    short getTableLen() const;
    void setTableLen(short tableLen);
};
#endif /* LocalVariableTable_hpp */
