#include <iostream>
#include "Sales_item.h"

int main() {
    Sales_item sum, temp;
    while(std::cin >> temp){
        sum += temp;
    }
    std::cout << sum << std::endl;
    return 0;
}