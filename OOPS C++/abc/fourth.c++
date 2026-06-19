/*
#include<iostream>
using namespace std;

void fun(int a=5){
    cout <<a;
}
int main(){
 fun();
 fun(19);
 return 0;
}
 */


#include<iostream>
using namespace std;

void fun(int a, int b, int c=9){
    cout <<a<< b<<c;
}
int main(){
    int a,b,c;
  fun(13,12,c);
 return 0;
}