#include<iostream>
using namespace std ;
 int power (int n){
    int p = n*n ;
    return p ;
 }
int main(){
    int n ;
    cout << "Enter number : " ;
    cin >> n ;
    int pow = power(n);
    cout<< "power of 2 : "<< pow << endl ;
}