#include<iostream>
using namespace std;                                                       //     i       j>=1     &&     j<=1 
int main(){                                                                //     1       j>=1     &&     j<=1 
    for(int i=1 ; i<=5 ; i++){                                             //     2       j>=1     &&     j<=1 
        for( int j=1 ; j<=5; j++){                                         //     3       j>=1     &&     j<=1 
        if( j>=1 && j<=i ){                                                //     4       j>=1     &&     j<=1 
          cout<<" * "  ;                                                   //     5       j>=1     &&     j<=1 
            }
           else{
             cout<<"  "  ;
           }
        }
        cout<< endl ;
    }
}