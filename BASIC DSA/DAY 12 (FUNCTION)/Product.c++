#include<iostream>
using namespace std ;

int product(int n){
    if(n==0){
        return 1;
    }
     return n*product(n-1);
}

int main(){
    int n =10 ;
    int pro = product(n);
    cout<< " product of number : " << pro << endl ;

}