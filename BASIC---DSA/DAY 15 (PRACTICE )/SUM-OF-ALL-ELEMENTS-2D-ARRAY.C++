#include<iostream>
using namespace std ;

int main(){
    int arr[3][3];
   
    for(int i=0 ; i<3; i++){
        for(int j=0 ;j<3; j++){
            cout<< "Enter Number : " ;
            cin>>arr[i][j];
        }
    }
    
      for(int i=0 ; i<3; i++){
        int sum =0;
        for(int j=0 ;j<3; j++){
            cout<<arr[i][j]<<" ";
           sum+= arr[i][j];
        }
           cout<<"Total sum : "<< sum <<endl;                                                // row wise sum 
    }
    //  cout<<"Total sum : "<< sum <<endl;
}
