#include "Sales_data.cpp"
#include <iostream>

int main(){
    Sales_data total(std::cin);
    Sales_data trans;
    while(read(std::cin, trans)){
        if (total.isbn() == trans.isbn()){
            total.combine(trans);
        } else {
            print(std::cout, total) << std::endl;
            total = trans;
        }
    }
    print(std::cout, total) << std::endl;
    return 0;
}