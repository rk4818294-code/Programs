#include<iostream>
using namespace std;

int main()
{
    int a , b;
    cout<<"Enter Two Numbers: ";
    cin>>a>>b;
    int gcd;
    for(int i=1;i<=b && i<=a;i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    cout<<"GCD Number : "<<gcd<<endl;
    return 0;
}
