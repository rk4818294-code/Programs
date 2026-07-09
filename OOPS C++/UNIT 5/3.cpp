// #include <iostream>
// using namespace std;

// class hero{
//     public:
//     int age;
//     string name;
//     int health;


// };

// int main(){
//     hero h1;
//     h1.age;
    
// }


//polymorphism are of two types
//1- compile time polymorphism: it is implemented at compile time.
// it is also known as ststic binding.
//it consists of method(function) overloading and operator overloading
//2- run time polymorphism:
// it is implemented at run time
//it is also known as dynamic binding
//it consist of method(function) overriding and virtual functions

//abstraction:
//it is the process of showing only essentials and hiding non-essential details.
//for eg.- every vehicle has a brake but its working is different in different vehicles like in cycle there is wired brake 

// in c++ we can achieve abstraction by using abstract classes.
//a class becomes abstract if it has atleast one pure virtual function.
//pure virtual function is a virtual function whose declaration is assigned zero(0)

//abstract classes

//1- we can not instatiate abstract classes i.e we can not create objects of abstract classes.
//2- it is compulsory to implement(define) abstract (pure virtual) function in each and evey child class of an abstract class.

#include<iostream>
using namespace std;

class Vehicle{
    int wheels;
    string brand;
    public:
         Vehicle(int w, string b){
            wheels = w;
            brand = b;
         }
         virtual void brake() = 0;// pure virtual function(abstract function)
         void display(){
            cout<<"brand:"<<brand<<endl;
            cout<<"wheels:"<<wheels<<endl;
         }
};
class bike: public Vehicle{
    public:
       bike(int w,string b): Vehicle(w,b){

       }
       void brake(){
        cout<<"car type brake applied"<<endl;
       }
} ;

int main(){
  //  Vehicle v1(4,"ferrari"); we cn not create objects of abstract class
  bike b1(2,"hero");
  b1.display();
  b1.brake();
}


// full abstraction(or interfaces):
//if an abstract class contains only pure virtual functions and nothing else