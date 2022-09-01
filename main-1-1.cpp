#include <iostream>
#include <string>
#include "Capybara.hpp"

using namespace std;


class Capybara;
int main(){
Capybara n1,n2,n3,n4;
cout<< "Before setting name: " << n1.name<<endl;
n1.setName("John");
cout<<"after setting name: "<<n1.getName()<<endl;
cout<< "Before setting name: " << n2.name<<endl;
n2.setName("Mark");
cout<<"after setting name: "<<n2.getName()<<endl;
cout<< "Before setting name: " << n3.name<<endl;
n3.setName("Luke");
cout<<"after setting name: "<<n3.getName()<<endl;
cout<< "Before setting name: " << n4.name<<endl;
n4.setName("Paul");
cout<<"after setting name: "<<n4.getName()<<endl;



}