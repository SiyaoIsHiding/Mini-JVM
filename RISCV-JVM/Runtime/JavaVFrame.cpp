//
//  JavaVFrame.cpp
//  RISCV-JVM
//
//  Created by HE Siyao on 5/7/2023.
//

#include "JavaVFrame.hpp"

// it has to be somewhere in the heap
CommonValue* JavaVFrame::pop(){
    CommonValue* cv = stack.top();
    stack.pop();
    return cv;
}
