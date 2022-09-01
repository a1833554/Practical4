#include "Wagon.h"
#include <iostream>
#include <string>

using namespace std;



Wagon::Wagon(){
    count = 0;
}                             
bool Wagon::addCapybara(Capybara newCapy){
if(count == 4){
    return false;
}else{
    n[count++]= newCapy;
    return true;
}

} // adds a Capybara to the wagon, returns false if full
void Wagon::emptyWagon(){
for (int i = 0; i<count; i++){
    n[i].~Capybara();
    count = 0;
}
}

              // remove all Capybaras from the wagon
void Wagon::printCapybaras(){
    for(int i = 0; i< count; i++){
        cout<< n[i].getName()<< " "<<n[i].getAge() <<endl;
    }


}                // print the name, a space, the age, then a new line
                                       // for each capybara in the order they were added



