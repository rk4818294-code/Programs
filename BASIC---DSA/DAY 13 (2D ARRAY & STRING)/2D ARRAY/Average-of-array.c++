#include<iostream>
using namespace std ;

int main(){
    int arr[3][3];
    int sum=0 ;
    int avg;

    for(int i=0 ; i< 3; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<"Enter number : ";
            cin>> arr[i][j];
        }
    }

    for(int i=0 ; i< 3; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<arr[i][j]<<" " ;
             sum += arr[i][j];
             avg= sum/arr[i][j] ;
              
         }
    }
        cout <<" Sum of array : " <<sum  <<endl ; 
        cout<<" average of array : " << avg <<  endl ;
        cout  <<endl   ;
}
   
