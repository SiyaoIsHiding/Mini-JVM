//
//  JavaVFrame.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 5/7/2023.
//

#ifndef JavaVFrame_hpp
#define JavaVFrame_hpp

#include <stdio.h>
#include "stack"
#include "map"
#include "CommonValue.hpp"
using namespace std;
class JavaVFrame{
public:
    stack<CommonValue*> stack; // why char*?
    map<int, CommonValue> locals;
};
#endif /* JavaVFrame_hpp */
