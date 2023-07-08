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
#include "ValueType.hpp"
#include "../Util/Constants.hpp"
CODERUN CodeRunBase::run[256];
void CodeRunBase::init() { 
    run[NOP] = &funcNOP;
    run[GETSTATIC] = &funcGETSTATIC;
    run[ICONST_0] = &funcICONST_0;
    run[PUTSTATIC] = &funcPUTSTATIC;
    run[LDC] = &funcLDC;
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

void CodeRunBase::funcICONST_0(JavaThread* thread, ByteCodeStream* codeStrea, int& index){
    thread->stack.top()->stack.push(new CommonValue{.type = T_INT, .value = 0});
}

void CodeRunBase::funcPUTSTATIC(JavaThread* thread, ByteCodeStream* codeStream, int& index){
    unsigned short opera = htons(codeStream->readBy2(index));
    std::string className = codeStream->getBelongMethod()->getBelongKlass()->getConstantPool()->getClassNameByFieldInd(opera);
    std::string fieldName = codeStream->getBelongMethod()->getBelongKlass()->getConstantPool()->getFieldNameByFieldInd(opera);
    InstanceKlass* klass = ClassLoader::allClasses[className];
    CommonValue* commonValue = thread->stack.top()->pop();
    klass->staticValues[fieldName] = commonValue;
}

void CodeRunBase::funcLDC(JavaThread* thread, ByteCodeStream* codeStream, int& index){
    unsigned char opera = codeStream->readBy1(index);
    char tag = codeStream->getBelongMethod()->getBelongKlass()->getConstantPool()->tag[opera];
    switch (tag) {
        case CONSTANT_String:
        {
            short strInd = (short) *codeStream->getBelongMethod()->getBelongKlass()->getConstantPool()->data[opera];
            std::string str = codeStream->getBelongMethod()->getBelongKlass()->getConstantPool()->data[strInd];
            thread->stack.top()->stack.push(new CommonValue{.type = T_OBJECT, .value = (char *) str.c_str()});
            break;
        }
            
        default:
            printf("Not supported opera type in opcode ldc\n");
            break;
    }
}
