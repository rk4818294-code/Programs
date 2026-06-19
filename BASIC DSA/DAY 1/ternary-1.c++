#include<iostream>
using namespace std;

int main (){
    int x=12,y=8 ,z=10 ;
//  int a= x>y ? x:y &&  x>z ? x:z &&  y>z ? y:z ;
    int a = x>y ? (x>z ? x:z): (y>z ? y:z);
    cout << " larger number "<<a;
    return 0;
}