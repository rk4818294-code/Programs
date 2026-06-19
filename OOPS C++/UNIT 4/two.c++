#include<iostream>
using namespace std;

class Vehicle {
    int wheels;
    string brand;
    public:
    Vehicle(int w, string b){
        wheels = w;
        brand = b;
    }
    virtual  void brake()=0;  // pure virtual function (abstract function)
    void display (){
        cout<<"brand :"<< brand<< endl;
         cout<<"wheels :"<< wheels<< endl;
    }
};
class Bike : public Vehicle{
 public :
      Bike (int w, string b): Vehicle(w,b){
      }
      void brake (){
        cout<<" car- type brake applied "<< endl;
      }
};
int main(){
// Vehicle v1(4,"ferrari");   // we can not create objects of abstract class 
Bike b1(2, "hero");
b1.display ();
b1.brake();

}

// Abstraction :
// it is the process of showing only essentials and hiding non-essential details .
// for example : 
// Every vehicle has a berake but its working is different in different vehicles like in cycle 
// there is wired breaking , while in car there is non-wired breaking 
// In c++ we can achive abstraction by using Abstract classess .
// A class becomes abstract if it has atleast one pure virtual function .
// pure virtual function is a virtual function whose declaration is assigned zero(0)


// Abstract classes:
// 1- we cannot instatiate abstract classes i.e we cannot create objects of abstract classes . 
// 2- It is compulsory to implement (define) abstraction (pure virtual ) function in each and every child classes of an abstract classes
// 3- if child class doesnt define pure virtual function of abstract parent class , then that child class will also become abstract class 
