//Inline funtion:= It is function for which compiler is requested to insert the function's body directly into the code at each point 
//  ADVANTAGES:- 
// 1. it is Leading to faster execution for small function
// 2. it can be debugged like regular function 

// DISADVANTAGES
// 1. can increase the size of executable binary code when the function is large in size , potentially leading the slower performance 
// 2. changes to an inline finction requires



#include<iostream>
using namespace std ;

inline int sum(int a,int b){
    return a+b ;
}
int main(){
    int x=5,y=10 ;
    // cin>>x>>y ;
   int s1= sum(x,y);
   int s2= sum(23,97);
   int s3= sum(54,12);  
   cout <<" sum = "<< s1 << " "<< s2 << " " << s3 <<endl;;
   return 0;
}
