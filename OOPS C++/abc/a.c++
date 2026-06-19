
#include<iostream>
using namespace std;
int main(){
    void *p;
    int a=5;
    p=&a;
    cout<<(int*)p<<endl;
    char ch='m';
    p=&ch;
    cout<<*(char*)p<<endl;
}