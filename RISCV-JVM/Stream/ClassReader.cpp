//
//  ClassReader.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 26/6/2023.
//

#include "ClassReader.hpp"

ClassReader::ClassReader(char* data)
    : data(data)
{
}

ClassReader* ClassReader::readByPath(string path)
{
    FILE* fp = fopen(path.c_str(), "r");
    fseek(fp, 0, SEEK_END);
    char* data = new char[ftell(fp)]; // init array to size
    int cur = 0;
    fseek(fp, 0, SEEK_SET);

    while (!feof(fp)) {
        data[cur] = fgetc(fp);
        cur++;
    }
    return new ClassReader(data);
}

unsigned char ClassReader::read1Byte()
{
    unsigned char res = data[cur];
    cur++;
    return res;
}

unsigned short ClassReader::read2Byte()
{
    unsigned short* res = (unsigned short*)(data + cur);
    cur += 2;
    return htons(*res);
}

unsigned int ClassReader::read4Byte()
{
    unsigned int* res = (unsigned int*)(data + cur);
    cur += 4;
    return htonl(*res);
}

void ClassReader::readNByte(int len, char* target)
{
    for (int i = 0; i < len; i++) {
        target[i] = read1Byte();
    }
    target[len] = '\0';
}
