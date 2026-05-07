// Reference variable :it is a special variable which is just alternate name for the variable which is assigned to it .


#include<iostream>
using namespace std;
void abc (int &p) {                      // pass by reference
   
        p=p+5;
    cout<<"Inside function " <<p<<endl ;
}            
 int main (){
    int a=7 ;
    cout<<"value before function call "<< a << endl ;
    abc(a);
    cout<<"value after function call "<< a << endl ;
    return 0;
 }


 