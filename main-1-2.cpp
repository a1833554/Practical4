#include <iostream>
#include <string>
#include "Person.h"

using namespace std;

int main(){
Person n1("john",3000);


cout<<"Name Before: "<<n1.myName<<" "<<n1.mySalary<<endl;
n1.setName("Mark");
cout<<"Name After: "<< n1.getName()<<endl;
n1.setSalary(42);
cout<<"Salary: "<<n1.getSalary()<<endl;


}