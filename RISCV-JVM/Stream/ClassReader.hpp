//
//  ClassReader.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 26/6/2023.
//

#ifndef ClassReader_hpp
#define ClassReader_hpp

#include <stdio.h>
#include "string"

using namespace std;
class ClassReader{
    char *data;
    int cur = 0;
    
public:
    ClassReader(char *data);
    
    static ClassReader* readByPath(string path);
    
    unsigned char read1Byte();
    unsigned short read2Byte();
    unsigned int read4Byte();
    
};

#endif /* ClassReader_hpp */
