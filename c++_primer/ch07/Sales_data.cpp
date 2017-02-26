#include "Sales_data.h"
#include <iostream>

Sales_data::Sales_data(std::istream &is){
    read(is, *this);
}

Sales_data& Sales_data::combine(const Sales_data &rhs){
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const{
    return revenue / units_sold;
}