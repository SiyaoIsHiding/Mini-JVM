//
//  CodeRunBase.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 6/7/2023.
//

#include "CodeRunBase.hpp"
#include "InstructionCode.hpp"
#include "../OOP/InstanceKlass.hpp"
#include "../Parser/ClassLoader.hpp"
CODERUN CodeRunBase::run[256];
void CodeRunBase::init() { 
    run[NOP] = &funcNOP;
    run[GETSTATIC] = &funcGETSTATIC;
}

void CodeRunBase::funcNOP(JavaThread *thread, ByteCodeStream* codeStream, int& index) {
    return;
}

void CodeRunBase::funcGETSTATIC(JavaThread* thread, ByteCodeStream* codeStream, int& index){
    unsigned short opera = htons(codeStream->readBy2(index));
    std::string className = codeStream->getBelongMethod()->getBelongKlass()->getConstantPool()->getClassNameByFieldInd(opera);
    std::string fieldName = codeStream->getBelongMethod()->getBelongKlass()->getConstantPool()->getFieldNameByFieldInd(opera);
    InstanceKlass* klass = ClassLoader::loadClass(className);
    CommonValue* commonValue = klass->staticValues[fieldName];
    thread->stack.top()->stack.push(new CommonValue{.type = commonValue->type, .value = commonValue->value});
}
