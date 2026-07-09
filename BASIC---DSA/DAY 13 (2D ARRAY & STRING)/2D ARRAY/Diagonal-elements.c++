#include<iostream>
using namespace std ;

int main(){
    int n=3;
    int arr[n][n];
    for(int i=0; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            cout<<"Enter Number :" ;
            cin >> arr[i][j];
        }
    }
   
     for(int i=0; i<n ; i++){
        for(int j=0 ; j<n ; j++){
            if(i==j || (i+j)==n-1){                                                 // Diagonal OR Anti diagonal
                
                cout<<arr[i][j];
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }

}