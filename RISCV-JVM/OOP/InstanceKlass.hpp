//
//  InstanceKlass.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 29/6/2023.
//

#ifndef InstanceKlass_hpp
#define InstanceKlass_hpp

#include <stdio.h>
#include "ConstantPool.hpp"
#define MAGIC 0xCAFEBABE

class InstanceKlass {
  int magic;
  short majorVersion;
  short minorVersion;
    ConstantPool* constantPool;
    

public:
  int getMagic() const;
  void setMagic(int magic);
  short getMajorVersion() const;
  void setMajorVersion(short version);
  short getMinorVersion() const;
  void setMinorVersion(short version);
    ConstantPool* getConstantPool() const;
    void setConstantPool(ConstantPool* pool);
};

#endif /* InstanceKlass_hpp */
