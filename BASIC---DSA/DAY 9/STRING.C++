// String : character array 
// string declaration 
#include<iostream>
using namespace std ;

int main(){
    char st[100][100 ];
    for( int i=0 ; i<5 ; i++){
        scanf(" %[^\n]", st[i]);
    }

    for( int i=0 ; i<5 ; i++){
     printf("\n%s" , st[i]) ;
    }
  return 0 ;
}



//  write a program to take a string from user and  then count  numer of that string 