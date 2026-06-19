// to count how many times a function is called

#include<iostream>
using namespace std;

int* fun(){
    static int a=0;
    a++;
 return &a;
}
int main(){
    fun();
    fun();
    fun();
  int*b=fun();
}