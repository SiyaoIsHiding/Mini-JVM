//
//  InstanceKlass.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#include "InstanceKlass.hpp"

int InstanceKlass::getMagic() const { return InstanceKlass::magic; }

void InstanceKlass::setMagic(int magic)
{
    if (magic != MAGIC) {
        throw 505;
    }
    InstanceKlass::magic = magic;
}

short InstanceKlass::getMajorVersion() const
{
    return InstanceKlass::majorVersion;
}

void InstanceKlass::setMajorVersion(short version)
{
    InstanceKlass::majorVersion = version;
}

short InstanceKlass::getMinorVersion() const
{
    return InstanceKlass::minorVersion;
}

void InstanceKlass::setMinorVersion(short version)
{
    InstanceKlass::minorVersion = version;
}
