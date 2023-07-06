//
//  JavaNativeInterface.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 5/7/2023.
//

#ifndef JavaNativeInterface_hpp
#define JavaNativeInterface_hpp

#include <stdio.h>
#include "../OOP/MethodInfo.hpp"
#include "../OOP/InstanceKlass.hpp"
#include "../Runtime/JavaThread.hpp"
#include "string"

using namespace std;
class JavaNativeInterface{
public:
    static MethodInfo* getMethod(InstanceKlass* klass, string name, string descriptor);
    static void callStaticMethod(JavaThread* thread, MethodInfo* method);
};

#endif /* JavaNativeInterface_hpp */
