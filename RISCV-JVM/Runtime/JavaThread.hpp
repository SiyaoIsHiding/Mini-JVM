//
//  JavaThread.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 5/7/2023.
//

#ifndef JavaThread_hpp
#define JavaThread_hpp

#include <stdio.h>
#include "stack"
#include "JavaVFrame.hpp"
using namespace std;
class JavaThread{
public:
    stack<JavaVFrame*> stack;
    JavaVFrame* getAndPop();
};
#endif /* JavaThread_hpp */
