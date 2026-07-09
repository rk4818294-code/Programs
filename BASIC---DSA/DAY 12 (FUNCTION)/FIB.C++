#include<iostream>
using namespace std ;
int fib(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int s = fib(n-1) + fib(n-2) ;
    return s ;
   
}
int main(){
    int n=7;
    int f=  fib(n);
    cout<<"Fifonacci series : "<< f <<endl ;
}