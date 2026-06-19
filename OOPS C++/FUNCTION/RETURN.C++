// REFERENCE RETURN TYPE :  WHENEVER WE ARE REQUIRED TO RETURN A REFERNCE VARIABLE  WE CAN USE REFERENCE RETURN TYPE 


// #include<iostream>
//    using namespace std;


// int a; //global variable
// int &rr(){
//      a=5;
//     return a;
// }
// int main(){
//     int &b=rr();
//     cout<<b ;
//     return 0;
// }





#include<iostream>
using namespace std;

int a;
int& rr() {
    a = 5;
    return a;
}

int main() {
     rr() = 20;             // assining value to a global variable using reference function
    cout << a;
    
    return 0;
}