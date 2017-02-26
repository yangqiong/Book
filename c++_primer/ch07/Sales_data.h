#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>
#include <iostream>

using std::istream;
using std::ostream;

class Sales_data {
friend istream &read(istream &is, Sales_data &item);
friend ostream &print(ostream &os, const Sales_data &item);
friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);

public:
    Sales_data() = default;
    Sales_data(const std::string &s): bookNo(s) {};
    Sales_data(const std::string &s, unsigned n, double p): 
                bookNo(s), units_sold(n), revenue(p*n) {}
    Sales_data(std::istream &);

    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data&);
    inline double avg_price() const;

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
};

istream &read(istream &is, Sales_data &item){
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item){
    os  << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs){
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

#endif