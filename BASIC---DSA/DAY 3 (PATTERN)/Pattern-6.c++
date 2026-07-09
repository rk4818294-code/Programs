#include<iostream>
using namespace std;                                                        
int main(){   
          int n;                                                       
    for(int i=1 ; i<=5 ; i++){  
        int n= 65;                                            
        for( int j=1 ; j<=5; j++){                                         
        if( j>=1 && j<=i ){                                                 
          cout<< (char)n ;
          n++  ;                                          
            }
           else{
             cout<<"  "  ;
           }
        }
        cout<< endl ;
    }
}