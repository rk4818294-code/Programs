#include<iostream>
using namespace std;
class A {
 public:
  virtual void m1(){
    cout<<"class A , m1() called"<< endl;
  }
};

class B :public A{
     void m2(){
    cout<<"class B , m2() called"<< endl;
  }
};

int  main(){
    A a, *ptr;           // ptr=&a
    B b;
    ptr=&b; ;              // a=b;
    ptr->m1();
}



// concept : Virtual keyboard in c++
// the virtual keyboard in c++ is used to achieve runtime polymorphism 

// It tells the compliler :
// "call the function based on the object type at runtime , not the pointer type ."

// need virtual 
// without virtual, c++ uses early binding (compile-time ).
// with virtual , c++ uses late binding (runtime).