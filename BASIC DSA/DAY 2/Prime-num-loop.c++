// Display prime no. between 100 - 200
// Display all perfect no. between 10-50
// display all armstrong no. between 100 - 1500 


#include<iostream>
using namespace std;
int main(){
//    int n=31;          // 1,2,3 .........................30,31

    int c=0;
    for(int n=100 ; n<=200 ; n++){
        c=0;
    for(int i=2 ; i<=n/2 ; i++){
        if(n % i==0){
        c=1;
        break ;
        }
}
if(c==0){
    cout   <<  "prime numbers = "  << n  <<   endl;
}

    }
    return 0;
}