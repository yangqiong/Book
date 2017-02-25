// 见Person.h


#include <iostream>
#include "Person.h"

int main(){
    Person p;
    read(std::cin, p);
    print(std::cout, p) << std::endl;
    return 0;
}