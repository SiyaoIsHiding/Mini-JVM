//
//  ConstantPool.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 30/6/2023.
//

#include "ConstantPool.hpp"

/**
 CONSTANT_Fieldref_info {
     u1 tag;
     u2 class_index;
     u2 name_and_type_index;
 }
 
 CONSTANT_NameAndType_info {
     u1 tag;
     u2 name_index;
     u2 descriptor_index;
 }
 */
std::string ConstantPool::getClassNameByFieldInd(unsigned short index) { 
    int classAndNameType = htonl(*data[index]);
    short classNameInd = (short) *data[classAndNameType >> 16];
    return data[classNameInd];
}

std::string ConstantPool::getFieldNameByFieldInd(unsigned short index) { 
    short nameAndTypeInd = htonl(*data[index]) & 0xFFFF;
    short nameInd = htonl(*data[nameAndTypeInd]) >> 16;
    return data[nameInd];
}
