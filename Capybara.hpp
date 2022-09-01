
#define CAPYBARA_HPP
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