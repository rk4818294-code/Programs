#include <iostream>
using namespace std ;

int binarySearch(int arr[] ,int n , int target){
    int left = 0 , right = n - 1 ;

    while(left <= right){
     int mid = (right + left) / 2 ;

     if(arr[mid]==target)   return mid ;

     else if(arr[mid]<target) 
          
          left = mid + 1 ;

    else      
        right = mid - 1 ;

    }
    return -1 ;
}

int main(){

    int arr[]={ 2 , 5 , 8 , 12 , 16 , 23 , 38 , 56 , 72};
    int n = sizeof(arr)/sizeof(arr[0]);

    int index = binarySearch(arr , n ,38);

    if(index!= -1){
        cout<<"Element found at index "<<index ;
    }
    else{
        cout<<"Element not found " ;
    }
    
}
