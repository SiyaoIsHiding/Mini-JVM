//
//  ClassReader.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 26/6/2023.
//


#ifndef ClassReader_hpp
#define ClassReader_hpp

#include "string"
#include <stdio.h>

using namespace std;
class ClassReader {
  char *data;
  int cur = 0;

public:
  ClassReader(char *data);

  static ClassReader *readByPath(string path);

  unsigned char read1Byte();
  unsigned short read2Byte();
  unsigned int read4Byte();
    void readNByte(int len, char *target);
};

#endif /* ClassReader_hpp */
