// question 1:
/*
write a c++ programm to create a class which contains an integer data member and now 
you are required to add two objects of that class using member function which will return the resultant objects 
hint: adding objects means adding their data member.
*/

// Solution:
#include<iostream>
using namespace std;

class Number {
int data;
string name;
public:
Number(string name="" ,int data=0) {                  // default arguements 
   this -> name=name;
    this -> data = data ;
}
void display(){
    cout << "value of "<< name << "data ="<< data <<endl;
}
 
 Number add(Number &n){            // passing object by value
  Number t ;
  t.data=this-> data +n.data;
  t.name = this-> name +"+" +n.name;
  return t;                            // return object by reference 
 }

};
int main (){
    Number num1("num1",10), num2("num2",25);
    Number num3("num3");
    num3 = num1.add(num2);
    num3.display ();
    num2.display ();
    num1.display ();
}