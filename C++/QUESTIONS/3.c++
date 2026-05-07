// write a function to print the square of numbers .


#include<iostream>
using namespace std;

void squarenumber( int p){
   p= p*p;
   cout << " square of number = "<< p <<   endl;
}
int main(){
    int x;
    cin >> x  ;
    cout << "number = "<< x<< endl;

    squarenumber(x) ;
}