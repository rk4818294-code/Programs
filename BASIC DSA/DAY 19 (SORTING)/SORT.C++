#include <iostream>
using namespace std ;

void selectionSort(int arr[] , int n){
  // 7 5 4 2
 for(int i=0 ; i<n-1 ; i++){
    int min_idx =i ;
    for( int j = i ; j<n; j++){
        if( arr[j]<arr[min_idx]){
            min_idx = j ;       
        }
    }
    int temp = arr[min_idx] ;
    arr[min_idx] = arr[i];
    arr[i]= temp ;
 }

  for(int i=0 ; i<n ; i++){
        cout<<" "<<arr[i];
    }

}

int main(){

    int arr[]= {22,11,44,33,66,55,77};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr,n); 

  
}