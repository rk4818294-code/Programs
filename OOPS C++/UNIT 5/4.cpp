#include<iostream>
using namespace std;
class animal{
    public:
    void sound(){
        cout<<"its animal sound"<<endl;
    }
};

class dog: public animal{
    public:
         void sound(){
            cout<<"all dogs are barking"<<endl;
         }
};
int main(){
    dog obj;
    obj.sound();
}

//examples of method overriding
//a function which is already declared inside parent class same as redefine in their child class also this type of function is called overriding it is also called runtime polymorphism.