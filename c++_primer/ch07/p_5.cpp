// 见Person.h
// 是该用const, this 就可以指向常量对象


#include "Person.h"
#include <iostream>

int main(){
    Person p;
    p.name = "Yang";
    std::cout << p.getName() << std::endl;

    const Person q = p;
    std::cout << q.getName() << std::endl; // 如果getName函数不含const, 则此编译报错
    return 0;
}

// p_5.cpp:14:18: error: member function 'getName' not viable: 'this' argument has type 'const Person', but function is not marked const