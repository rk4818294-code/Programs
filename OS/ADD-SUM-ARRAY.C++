// add sum two array
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr1[n],arr2[n],arr3[n];
    cout<<"enter first array : ";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"enter second array : ";
    for(int i=0; i<n; i++){
        cin>>arr2[i];
    }
    for(int i=0; i<n; i++){
        arr3[i]=arr1[i]+arr2[i];
    }
    cout<<"sum of two array is : ";
    for(int i=0; i<n; i++){
        cout<<arr3[i]<<" ";
    }
    return 0;
}