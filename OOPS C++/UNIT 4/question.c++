// Ques - write a program in which one class is inherted from a base class and show 
// the constructor and destructor sequence.


// Ques - write a c++ program in which a base class is inherted in two child classes 
// and that two child classes are inherted in a single super child class. then show 
// the constructor and destructor sequence by creating a super_child cass object.



#include <iostream>
using namespace std;

class Parent
{
public:
   Parent()    {
        cout << "parent class default constructor " << endl; 
    }
       Parent(int a)    {
        cout << "parent class parameterised constructor " << endl; 
    }
    ~ Parent () {

        cout << "parent class destructor"<<endl;
    }
};

class child : public Parent {

    public:
   child  ()    {
        cout << "child class default constructor " << endl; 
    }
     child  (int a)  : Parent(a)  {
        cout << "child class parameterised constructor " << endl; 
    }
    ~ child () {

        cout << "child class destructor"<<endl;
    }


};


int main (){
    child c1(10);

}