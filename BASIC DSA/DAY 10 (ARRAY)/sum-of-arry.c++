#include<iostream>
using namespace std ;

int main(){
  int arr[5]={1,2,3,4,5};
  int sum =0;
   
    for(int i=0 ; i<5 ; i++){
        sum += arr[i] ;
     
    }
    int avg = sum/5 ;
    cout<<"sum "<<sum<<endl ;
    cout<<"avg "<<avg<<endl ;
}