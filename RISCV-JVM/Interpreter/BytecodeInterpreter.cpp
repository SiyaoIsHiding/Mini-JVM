//
//  BytecodeInterpreter.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 6/7/2023.
//

#include "BytecodeInterpreter.hpp"
#include "ByteCodeStream.hpp"
#include "CodeRunBase.hpp"
bool BytecodeInterpreter::run(JavaThread *thread, MethodInfo *method) {
    ByteCodeStream* codeStream = method->getAttributes()->getCodes();
    int codeLen = codeStream->getLength(); // is it the right len ?
    printf("codeLen: %d\n", codeLen);
    int ind = 0;
    for(int i = 0; i < codeLen; i++){
        unsigned char opcode = codeStream->readBy1(ind);
        printf("opcode %X\n", opcode);
        CodeRunBase::run[opcode](thread, method->getAttributes()->getCodes(), ind);
    }
    return true;
}
