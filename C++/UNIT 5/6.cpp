#include<iostream>
using namespace std;

class animal{
    public:
        virtual void sound()=0;//pure virtual function
        
};
class dog:public animal{
    public:
        void sound(){
            cout<<"all dogs are barking"<<endl;
        }
};

int main(){
    animal *a;
    dog d;
    a=&d;
    a->sound();
}

//pure virtual function in c++- a pure virtual function is a function in c++ that is declared in a base class but doees not have any implimentation in that class.
// it is used to achieve abstraction