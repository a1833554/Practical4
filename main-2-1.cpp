
#include <iostream>
#include <string>
#include "Wagon.h"
#include "Wagon.cpp"


using namespace std; 

int main(){
Capybara n1,n2,n3,n4,n5;

n1.setAge(12);
n1.setName("Harry");
n2.setAge(23);
n2.setName("John");
n3.setAge(15);
n3.setName("Mark");
n4.setAge(16);
n4.setName("Paul");
n5.setAge(13);
n5.setName("jack");

Wagon w;

int x = w.addCapybara(n1);
if (x==0){
    cout<<"Cart is full"<<endl;
}else{
    cout<<"Added to cart"<<endl;
}
x = w.addCapybara(n2);
if (x==0){
    cout<<"Cart is full"<<endl;
}else{
    cout<<"Added to cart"<<endl;
}
x = w.addCapybara(n3);
if (x==0){
    cout<<"Cart is full"<<endl;
}else{
    cout<<"Added to cart"<<endl;
}
x = w.addCapybara(n4);
if (x==0){
    cout<<"Cart is full"<<endl;
}else{
    cout<<"Added to cart"<<endl;
    
}
x = w.addCapybara(n5);
if (x==0){
    cout<<"Cart is full"<<endl;
}else{
    cout<<"Added to cart"<<endl;
}

//cout<<w.printCapybaras()<<endl;


}