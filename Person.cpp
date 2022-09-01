

#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person(int salary,string name){
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

