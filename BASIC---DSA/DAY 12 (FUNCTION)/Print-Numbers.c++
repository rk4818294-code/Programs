#include<iostream>
using namespace std ;

void print(int n){
    if(n==0){
        return ;
    }
    // cout<<n<<" ";                                 // desending order
    print(n-1);
    cout<<n<<" ";                                    // Ascending order
}
int main(){
    int n=10;
    print(n);
}