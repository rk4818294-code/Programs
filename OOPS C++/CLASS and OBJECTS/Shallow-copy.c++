#include<iostream>
using namespace std;

// shallow copy vs deep copy

// In shallow copy ,wherever we make changes to one variable ,the changes 
// also applied to copied variable or vice versa

// int main(){
//  int *a=new int(5);
//  int *b = a;  // shallow copy
//  cout<<*a<<endl<<*b<<endl;
//  *b=10;
//  cout <<*a<<endl<<*b<<endl;
//  return 0;
// }


int main(){
 int *a=new int(5);
 int *b =new int();  // New memory location to make deep copy
 *b=*a;             // copy one value
 cout<<*a<<endl<<*b<<endl;
 *b=10;
 cout <<*a<<endl<<*b<<endl;
 return 0;
}
