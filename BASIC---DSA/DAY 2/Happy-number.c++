#include<iostream>
using namespace std;
int sumofdigit(int num){
    int s=0;
    while(num!=0){
        int r= num%10;
        s+=r*r;
        num/=10;
    }
    return s;
}
int main(){
    int n;
    int slow , fast;
    cin>> n;
    slow = sumofdigit(n);
    fast = sumofdigit(sumofdigit(n));
    while(fast!=1 && slow !=fast){
        
    }
}