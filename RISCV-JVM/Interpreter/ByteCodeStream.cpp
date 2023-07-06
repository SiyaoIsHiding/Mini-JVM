//
//  ByteCode.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 3/7/2023.
//

#include "ByteCodeStream.hpp"

MethodInfo* ByteCodeStream::getBelongMethod() const
{
    return belongMethod;
}

void ByteCodeStream::setBelongMethod(MethodInfo* belongMethod)
{
    ByteCodeStream::belongMethod = belongMethod;
}

CodeAttributeInfo* ByteCodeStream::getBelongAttribute() const
{
    return belongAttribute;
}

void ByteCodeStream::setBelongAttribute(CodeAttributeInfo* belongAttribute)
{
    ByteCodeStream::belongAttribute = belongAttribute;
}

int ByteCodeStream::getLength() const
{
    return length;
}

void ByteCodeStream::setLength(int length)
{
    ByteCodeStream::length = length;
}

int ByteCodeStream::getIndex() const
{
    return index;
}

void ByteCodeStream::setIndex(int index)
{
    ByteCodeStream::index = index;
}

char* ByteCodeStream::getCodes() const
{
    return codes;
}

void ByteCodeStream::setCodes(char* codes)
{
    ByteCodeStream::codes = codes;
}
