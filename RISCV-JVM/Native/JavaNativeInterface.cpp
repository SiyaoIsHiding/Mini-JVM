//
//  JavaNativeInterface.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 5/7/2023.
//

#include "JavaNativeInterface.hpp"


MethodInfo *JavaNativeInterface::getMethod(InstanceKlass *klass, std::string name, std::string descriptor) {
    MethodInfo* methods = klass->getMethods();
    for(int i = 0; i < klass->getMethodCnt(); i++){
        string methodDescriptor = klass->getConstantPool()->data[methods[i].getDescriptorInd()];
        if(methods[i].getName() == name && methodDescriptor == descriptor){
            return methods+i;
        }
    }
    return NULL;
}

void JavaNativeInterface::callStaticMethod(JavaThread *thread, MethodInfo *method) {
    printf("Running method: %s\n", method->getName().c_str());
    JavaVFrame* frame = new JavaVFrame;
    thread->stack.push(frame);
    // run the codes
    thread->stack.pop();
    delete frame;
}
