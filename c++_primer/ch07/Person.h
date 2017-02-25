#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

struct Person
{   
    string name;
    string addr;

    string getName() const{ 
        return name;
    }

    string getAddr() const{
        return addr;
    }
};

istream & read(istream &is, Person &rhs){
    is >> rhs.name >> rhs.addr;
    return is;
}

ostream & print(ostream &os, const Person &rhs){
    os << rhs.name << " " << rhs.addr;
    return os;
}

#endif