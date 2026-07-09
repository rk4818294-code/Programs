#include<iostream>
using namespace std ;

int main(){ 
        int r;
        int x = 123;
         int s=0;
         while(x!=0){
            r= x%10 ;
            s = s*10+r ;
            x = x/10 ;

         }
         cout<< s <<endl;
}