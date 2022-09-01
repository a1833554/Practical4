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

Person n2("Luke",2000);
cout<<"Name Before: "<<n2.myName<<" "<<n2.mySalary<<endl;
n1.setName("Markus");
cout<<"Name After: "<< n2.getName()<<endl;
n1.setSalary(30021);
cout<<"Salary: "<<n2.getSalary()<<endl;

Person n3("johneyyy",3320);
cout<<"Name Before: "<<n3.myName<<" "<<n3.mySalary<<endl;
n1.setName("Mark");
cout<<"Name After: "<< n3.getName()<<endl;
n1.setSalary(13421);
cout<<"Salary: "<<n3.getSalary()<<endl;

Person n4("fisher",8300);
cout<<"Name Before: "<<n4.myName<<" "<<n4.mySalary<<endl;
n1.setName("fishman");
cout<<"Name After: "<< n4.getName()<<endl;
n4.setSalary(4323);
cout<<"Salary: "<<n4.getSalary()<<endl;


}