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
using namespace std;
class JavaVFrame{
public:
    stack<char*> stack; // why char*?
    map<int, char> locals;
};
#endif /* JavaVFrame_hpp */
