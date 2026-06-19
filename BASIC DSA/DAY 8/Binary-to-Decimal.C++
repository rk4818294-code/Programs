#include<iostream>
using namespace std;

int main(){
    int binary , decimal = 0 , base=1 , r;
    cout<< "Enter a binary No. = " ;
    cin>> binary ;

   while(binary>0){
    r= binary%10 ;                             //  r =
    decimal = decimal + r * base ;            // decimal = 
    base = base * 2;                         //  base =
    binary = binary /10 ;
   }

   cout<< " Decimal number = " << decimal ;
   return 0 ;
} 