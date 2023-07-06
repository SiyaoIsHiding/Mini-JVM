//
//  CodeRunBase.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 6/7/2023.
//

#include "CodeRunBase.hpp"
#include "InstructionCode.hpp"
CODERUN CodeRunBase::run[256];
void CodeRunBase::init() { 
    run[NOP] = &funcNOP;
}

void CodeRunBase::funcNOP(JavaThread *thread, MethodInfo *method, int& index) { 
    return;
}
