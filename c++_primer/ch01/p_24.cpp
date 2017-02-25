/**
 * 24.输入表示多个ISBN的多条销售记录来测试上一个程序，每个ISBN的记录应该聚在一起
 */

#include <iostream>
#include <map>
#include <string>
#include "Sales_item.h"

using std::map;
using std::string;

int main() {
    Sales_item book;
    map<string, Sales_item> store;
    map<string, Sales_item>::iterator iter;
    while (std::cin >> book){
        string isbn = book.isbn();
        store.find(isbn) == store.end() ? store[isbn] = book : store[isbn] += book;
    }

    for (iter = store.begin(); iter != store.end(); iter++){
        std::cout << iter->second << std::endl;
    }
    return 0;
}
