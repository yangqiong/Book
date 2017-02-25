/**
 * 23.编写程序，读取多条销售记录，并统计每个ISBN(每本书)有几条销售记录
 */

#include <iostream>
#include <map>
#include "Sales_item.h"
#include <string>

using std::string;
using std::map;

int main(){
    Sales_item book;
    map<string, int> bookCount;
    map<string, int>::iterator  iter;
    
    while(std::cin >> book){
        string isbn = book.isbn();
        int count = bookCount[isbn];
        count ? bookCount[isbn]++ : bookCount[isbn] = 1;
    }

    for (iter=bookCount.begin(); iter!=bookCount.end(); iter++){
        std::cout << iter->first << " " << iter->second << std::endl;
    }
    return 0;
}