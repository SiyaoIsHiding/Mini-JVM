//
//  AttributeInfo.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 3/7/2023.
//

#ifndef AttributeInfo_hpp
#define AttributeInfo_hpp

#include <stdio.h>
class AttributeInfo {
    short nameInd;
    int length;
    char* container;

public:
    short getNameInd() const;
    int getLength() const;
    char* getContainer() const;
    void setNameInd(short nameInd);
    void setLength(int length);
    void setContainer(char* container);
};

#endif /* AttributeInfo_hpp */
