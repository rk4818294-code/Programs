#include<iostream>
using namespace std;

void abc (int *p) {                                                              // pass / call by pointer
   
        *p=*p+5;
    cout<<"Inside function " <<*p<<endl ;
}            
 int main (){
    int a=7 ;
    cout<<"value before function call "<< a << endl ;
    abc(&a);
    cout<<"value after function call "<< a << endl ;
    return 0;
 }


