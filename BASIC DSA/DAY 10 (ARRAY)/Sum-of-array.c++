#include<iostream>
using namespace std ;
int main(){
int n ;
int arr[n];
cin >>n ;
int sum =0 ;
    
for(int i=0 ; i< n; i++){
    cout<< "Enter array : " ;
    cin>> arr[i];
}
     for(int i=0 ; i< n; i++){
    
        sum+=arr[i];
}
       cout << " Total sum : "<< sum <<endl ;
}
