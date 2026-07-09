// Accept three no. form user and check which is larger no. 
// Accept radius of circle then find their area of circle 

#include<iostream>
using namespace std;
int main(){
    int x,y, z ;
    cin >> x>> y>>z ;
     if (x>y && x>z ){
        cout <<"x is greater no.";
     }
     else if(y>z && y>x){
         cout <<"y is greater no.";
     }
     else if (z>x && z>y){
         cout <<"z is greater no.";
     }
     else {
        cout<< " no are larger number ";
     }
     return 0;
}