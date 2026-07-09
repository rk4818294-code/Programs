// Array = collection of elements of same data types
#include<stdio.h>
int main(){
    int arr[5]={10,88,20,95,60};
    int maxi=arr[0];
    for(int i=1;i<5;i++){
     if(arr[i]>maxi){

         maxi=arr[i];
     }
    }
    printf("%d",maxi);
}