//
//  ClassFileParser.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#include "ClassFileParser.hpp"

InstanceKlass* ClassFileParser::Parser(ClassReader* classReader)
{
    InstanceKlass* klass = new InstanceKlass;
    putMagic(classReader, klass);
    putMinorVersion(classReader, klass);
    putMajorVersion(classReader, klass);
    putConstantPool(classReader, klass);
    putAccessFlag(classReader, klass);
    putClassNames(classReader, klass);
    putInterfaces(classReader, klass);
    return klass;
}

void ClassFileParser::putMagic(ClassReader* classReader, InstanceKlass* klass)
{
    int magic = classReader->read4Byte();
    klass->setMagic(magic);
}

void ClassFileParser::putMajorVersion(ClassReader* classReader, InstanceKlass* klass)
{
    klass->setMajorVersion(classReader->read2Byte());
}

void ClassFileParser::putMinorVersion(ClassReader* classReader, InstanceKlass* klass)
{
    klass->setMinorVersion(classReader->read2Byte());
}

void ClassFileParser::putConstantPool(ClassReader* classReader, InstanceKlass* klass)
{
    short count = classReader->read2Byte();
    ConstantPool* pool = new ConstantPool;
    klass->setConstantPool(pool);
    pool->count = count;
    pool->tag = new char[count];
    for (int i = 1; i < count; i++) {
        unsigned char tag = classReader->read1Byte();
        pool->tag[i] = tag;
        switch (tag) {
        case CONSTANT_Utf8: {
            unsigned short len = classReader->read2Byte();
            pool->data[i] = new char[len + 1];
            classReader->readNByte(len, pool->data[i]);
            printf("#%d = Utf8          %s\n", i, pool->data[i]);
            break;
        }

        case CONSTANT_Integer: {
            char* data = new char[4];
            *data = classReader->read4Byte();
            pool->data[i] = data;
            printf("#%d = Integer          %d\n", i, (int)*(pool->data[i]));
            break;
        }

        case CONSTANT_Float: {
            char* data = new char[4];
            *data = classReader->read4Byte();
            pool->data[i] = data;
            printf("#%d = Float          %2.2f\n", i, (float)*(pool->data[i]));
            break;
        }

        case CONSTANT_Class: {
            char* data = new char[2];
            *data = classReader->read2Byte();
            pool->data[i] = data;
            printf("#%d = Class          %d\n", i, (int)*(pool->data[i]));
            break;
        }

        case CONSTANT_String: {
            char* data = new char[2];
            *data = classReader->read2Byte();
            pool->data[i] = data;
            printf("#%d = String          %s\n", i, pool->data[i]);
            break;
        }

        case CONSTANT_Fieldref:
        case CONSTANT_Methodref:
        case CONSTANT_InterfaceMethodRef:
            {
            int* data = new int;
            *data = classReader->read4Byte();
            pool->data[i] = (char*)data;
            int classInd = *data >> 16;
            int nameAndTypeInd = (*data) & ((1 << 16) - 1);
            printf("#%d = Field/Method  %d %d\n", i, classInd, nameAndTypeInd);
            break;
        }

        case CONSTANT_NameAndType: {
            int* data = new int;
            *data = classReader->read4Byte();
            pool->data[i] = (char*)data;
            int classInd = *data >> 16;
            int nameAndTypeInd = (*data) & ((1 << 16) - 1);
            printf("#%d = NameAndType   %d %d\n", i, classInd, nameAndTypeInd);
            break;
        }

        default: {
            printf("#%d = Unsupported", i);
            break;
        }
        }
    }
}

void ClassFileParser::putAccessFlag(ClassReader* classReader, InstanceKlass* klass)
{
    short flag = classReader->read2Byte();
    klass->setAccessFlag(flag);
}

void ClassFileParser::putClassNames(ClassReader *classReader, InstanceKlass *klass) { 
    klass->setClassName(classReader->read2Byte());
    klass->setSuperClassName(classReader->read2Byte());
}

void ClassFileParser::putInterfaces(ClassReader *classReader, InstanceKlass *klass) {
    short count = classReader->read2Byte();
    InterfaceInfo* interfaces = new InterfaceInfo[count];
    for (int i = 0; i < count; i++){
        unsigned short constantPoolInd = classReader->read2Byte();
        int nameInd = *(klass->getConstantPool()->data[constantPoolInd]);
        string name = klass->getConstantPool()->data[nameInd];
        interfaces[i] = *(new InterfaceInfo(constantPoolInd, name));
    }
    klass->setInterfaces(interfaces);
}

void ClassFileParser::putFields(ClassReader *classReader, InstanceKlass *klass) { 
    short count = classReader->read2Byte();
    FieldsInfo* fields = new FieldsInfo[count];
    for(int i = 0; i < count; i++){
        short af = classReader->read2Byte();
        short ni = classReader->read2Byte();
        short di = classReader->read2Byte();
        short ac = classReader->read2Byte();
        fields[i] = *(new FieldsInfo(af, ni, di, ac));
    }
    klass->setFields(fields);
}




