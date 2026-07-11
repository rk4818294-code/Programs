#include<iostream>
using namespace std ;
int main(){
    int a, b;
    cout << "Enter number = " ;
    cin>> a>> b;
    int gcd;
    while(b!=0){
        int t=b;
        b= a%b;
        a=t;
    }
    gcd =a ;
    cout<< "GCD = "<< gcd << endl;

    return 0;
}