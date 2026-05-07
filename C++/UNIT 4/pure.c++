// example of pure virtual function 
#include<iostream>
using namespace std;
class A {
 public:
  virtual void m1()=0;            // pure virtyal function 
};

class B :public A{
     void m1(){
    cout<<"class B , m2() called"<< endl;
  }
};

int  main(){
    A *ptr;           // ptr=&a
    B b;
    ptr=&b; ;              // a=b;
    ptr->m1();
}
