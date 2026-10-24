//linear search in an array 
#include<iostream>
using namespace std ;
int main(){
    int arr[5] = {1, 2, 3, 4, 5} ;
    int n ;
    cout<<"enter the n to be searched : " ;
    cin>>n ;
    for(int i=0; i<5; i++){
        if(arr[i]==n){
            cout<<"n found at index : "<<i<<endl ;
            return 0 ;
        }
    }
    cout<<"n not found"<<endl ;
}