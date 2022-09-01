

#include "Person.h"
using namespace std;



void Person::setName(string sname)
{
    myName = sname;
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

