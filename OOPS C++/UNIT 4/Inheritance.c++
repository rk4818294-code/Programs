// Inheritance 
// Example of method overriding = A function which is already declared inside parent class same as redefine in their child class 
//                                also this type of function is called method overriding,its is also called Runtime Polymorphism


#include<iostream>
using namespace std;

class Animal{                                                 // parent class
    public:
    void sound(){
        cout<<"Its Animal sound"<< endl;

    }
};
class Dog: public Animal{                                    // child class
    public:
    void sound2(){
        cout<<"All dogs are barking"<< endl;

    }
};

int main(){
Dog d;
d.sound();
//d.sound2();
}