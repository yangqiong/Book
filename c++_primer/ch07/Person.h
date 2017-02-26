#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;

class Person
{   
public:
    Person() = default;
    Person(string n, string a): name(n), a(a) {};

    string getName() const{ 
        return name;
    }

    string getAddr() const{
        return addr;
    }

private:
    string name;
    string addr;
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