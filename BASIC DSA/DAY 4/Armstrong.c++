#include<iostream>
#include<cmath>
using namespace std;
int digit (int n){
    int count=0 ;
    while(n!=0){
     n = n/10;
       count++ ;
    }
    return count ;
    
}
int main(){
    int n ;
    cin>> n;
    int original =n ;
    int dig=digit(n);
    int s=0;
    while(n!=0){
        int r = n%10;
        s+=pow(r, dig);
        n=n/10 ;
    }
    if(s == original){
        cout<<"Armstrong no." ;
    }
    else{
        cout << "not Armstrong  " ;
    }
}