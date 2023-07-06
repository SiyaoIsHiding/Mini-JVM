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

typedef void (*CODERUN)(JavaThread* thread, MethodInfo* method, int& index);

class CodeRunBase{
public:
    static CODERUN run[256];
    static void init();
    static void funcNOP(JavaThread* thread, MethodInfo* method, int& index);
};

#endif /* CodeRunBase_hpp */
