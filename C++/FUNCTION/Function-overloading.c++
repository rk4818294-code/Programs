// FUNCTION OVERLOADING : it is a process in ehich we are making more than one function with same name 
//                        but differentiating either number of parameters or type of paremeters


#include<iostream>
using namespace std;
int sum(int a , int b){
    return a+b;
}
float sum(float a , float b){
    return a+b;
}
int main(){
    cout << sum(5,4) << endl ;
    cout << sum (2.2f,3.7f) <<endl ;
    return 0;
}


