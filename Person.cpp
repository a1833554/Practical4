

#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person(string name,int salary){
    myName = name;
    mySalary = salary;
}

void Person::setName(string name)
{
    myName = name;
}

string Person::getName()
{
    return myName;
} 
void Person::setSalary(int salary)
{
    mySalary = salary;
}
int Person::getSalary()
{
    return mySalary;
}

