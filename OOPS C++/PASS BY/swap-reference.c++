// swap value of two variables using pass by refernce in funcion

#include<iostream>
using namespace std;
 void swap(int &p,int &q ){
int  t=p;
     p=q;
     q=t;
}
int main(){
    int a=5,b=10;
    swap (a,b);
    cout<<a  <<" and  " <<b;
    return 0;

}


// advantages of refernce variable 