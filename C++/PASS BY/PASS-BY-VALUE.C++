#include<iostream>
using namespace std;

void abc (int a) {                                                      // pass by value
   
        a=a+5;
    cout<<"Inside function " <<a<<endl ;
}            
 int main (){
    int a=7 ;
    cout<<"value before function call "<< a << endl ;
    abc(a);
    cout<<"value after function call "<< a << endl ;
    return 0;
 }


  


