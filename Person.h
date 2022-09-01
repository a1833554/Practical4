#ifndef PERSON_H
#define PERSON_H
#include <string>


using namespace std;

class Person{



    public:
    string myName;
    int mySalary;

Person(int ,string);
// a name and salary must be provided to create a Person
void setName(string);         // change the Person's name
string getName();
void setSalary(int );        // change the Person's salary
int getSalary();


};
#endif

