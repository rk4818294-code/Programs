#include<iostream>                                                 //  16  8  4  2  1
using namespace std;
int main(){                                                 //     x       0  1  0  1                  x=5
    int x = 5;                                              //     y       1  0  1  0                  y= 10
    int y =10 ;
    x = x^y;                                               //  x=x^y       1  1  1  1                  x= 15    not 5
    y= x^y;                                                //  y=x^y       0  1  0  1                  y=  5    not 10  
    x= x^y ;                                               //  x= x^y      1  0  1  0                  x= 10
    cout<<"x= "<< x<< endl;
    cout<<"y= "<< y<< endl; 
return 0;
}



// concept :
//               x = x + y
//               y = x - y
//               x = x - y 