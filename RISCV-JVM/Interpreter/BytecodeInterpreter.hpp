//
//  BytecodeInterpreter.hpp
//  RISCV-JVM
//
//  Created by HE Siyao on 6/7/2023.
//

#ifndef BytecodeInterpreter_hpp
#define BytecodeInterpreter_hpp

#include "../Runtime/JavaThread.hpp"
#include "../OOP/MethodInfo.hpp"
#include <stdio.h>

class BytecodeInterpreter{
public:
    static bool run(JavaThread* thread, MethodInfo* method); // why return bool?
};
#endif /* BytecodeInterpreter_hpp */
