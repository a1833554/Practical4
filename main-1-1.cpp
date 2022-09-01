#include <iostream>
#include <string>

using namespace std;
class Capybara{
    public:
    string name;
    int age;
                   // no name or age is required to create a Capybara
void setName(string capyName){
name = capyName;
}  // change the capybara's name
string getName(){
return name;
}
void setAge(int capyAge){ 
age = capyAge; 
}      // change the capybara's age
int getAge(){
return age;
}
};


int main(){
Capybara n1,n2,n3,n4;
cout<< "Before setting name: " << n1.name<<endl;
n1.setName("John");
cout<<"after setting name: "<<n1.name<<endl;
cout<<"getting name: "<<n1.getName()<<endl;



}