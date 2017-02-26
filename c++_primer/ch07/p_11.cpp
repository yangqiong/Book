#include "Sales_data.cpp"
#include <iostream>

int main(){
    Sales_data s1;
    Sales_data s2("A-1234-B-5678");
    Sales_data s3("A-1234-B-5678", 2, 10.0);
    Sales_data s4(std::cin);

    print(std::cout, s1) << std::endl;
    print(std::cout, s2) << std::endl;
    print(std::cout, s3) << std::endl;
    print(std::cout, s4) << std::endl;

    return 0;
}