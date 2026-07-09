#include<iostream>
using namespace std;
void num(int n){
   for(int i=2 ; i<=n ; i+=2){
    cout<< i  << " "  ;
   }
}

int main(){
    int n;
    cout<< " Enter number : " ;
    cin >> n ;
     num(n);
   

}