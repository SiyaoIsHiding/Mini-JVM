//
//  main.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 26/6/2023.
//

#include "OOP/InstanceKlass.hpp"
#include "Parser/ClassLoader.hpp"
#include "Runtime/JavaThread.hpp"
#include "Native/JavaNativeInterface.hpp"
#include <iostream>

int main(int argc, const char* argv[])
{
    // insert code here...
    ClassLoader::loadClass("Test");
    InstanceKlass* klass = ClassLoader::allClasses["Test"];
    JavaThread* thread = new JavaThread;
    MethodInfo* method = JavaNativeInterface::getMethod(klass, "main", "([Ljava/lang/String;)V");
    JavaNativeInterface::callStaticMethod(thread, method);
    return 0;
}
