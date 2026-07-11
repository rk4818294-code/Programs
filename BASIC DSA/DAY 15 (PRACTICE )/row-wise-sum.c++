#include<iostream>
using namespace std ;

int main(){
    int arr[3][3];
    for(int i=0 ; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Enter number : ";
            cin>> arr[i][j];
        }
    }
    int sum=0;
     for(int i=0 ; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
        }
        cout<<"sum of row "<<sum <<endl ;
    }
    return 0;
}