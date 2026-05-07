// Return by pointer
// local variable : whenever a declare  variable inside any block (function ,loop,else,{}) 
//                  that variable only be access inside that block only and its memory eiil be deleted when block ends


/* 
#include<iostream>
using namespace std;

int * fun(){
    int a;  // local variable
    a=5;
 return &a;
}
int main(){
    int*p=fun();
    cout<<*p;
    return 0;
}
    */

// global variable : whenever a variable is declared outside every block that variable is known as global variable 
//                   any function can access and make changes to global variable


// static variable:  it is a variable which will have its scope throughout the programm
//                   it retains its value when function called multiple times 
//                   it declares only once

#include<iostream>
using namespace std;
 
void fun(){
   static int a=9;
    a++;
    cout<<"a="<<a<<endl;
}
int main(){
    fun();
    fun();
    fun();
    return 0;
}


