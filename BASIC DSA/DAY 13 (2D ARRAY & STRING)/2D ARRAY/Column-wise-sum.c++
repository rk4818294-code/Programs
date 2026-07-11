#include<iostream>
using namespace std ;
int main(){
    int arr[3][3];
  
    for(int i=0 ; i<3 ; i++){
        for(int j=0; j<3; j++){
            cout<<"Enter Number :  " ;
            cin>>arr[i][j];
        }
     }

      for(int j=0; j<3; j++){
       
        int sum =0 ;
         for(int i=0; i<3; i++){
            cout<<arr[i][j]<<" " ;
            sum+= arr[i][j];
         }
             
           cout<<" sum of column : "<<  sum <<endl ;
        }
}