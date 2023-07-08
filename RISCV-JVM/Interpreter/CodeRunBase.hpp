//
//  CodeRunBase.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 6/7/2023.
//

#ifndef CodeRunBase_hpp
#define CodeRunBase_hpp

#include "../Runtime/JavaThread.hpp"
#include "../OOP/MethodInfo.hpp"
#include "ByteCodeStream.hpp"

typedef void (*CODERUN)(JavaThread* thread, ByteCodeStream* codeStream, int& index);

class CodeRunBase{
public:
    static CODERUN run[256];
    static void init();
    static void funcNOP(JavaThread* thread, ByteCodeStream* codeStream, int& index);
    static void funcGETSTATIC(JavaThread* thread, ByteCodeStream* codeStrea, int& index);
    static void funcICONST_0(JavaThread* thread, ByteCodeStream* codeStrea, int& index);
    static void funcPUTSTATIC(JavaThread* thread, ByteCodeStream* codeStream, int& index);
    static void funcLDC(JavaThread* thread, ByteCodeStream* codeStream, int& index);
};

#endif /* CodeRunBase_hpp */
