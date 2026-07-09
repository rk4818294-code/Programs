#include<iostream>
using namespace std ;
void swap(int &a1 , int &b1) {                   // local variables
  int c = a1 ;
  a1 = b1 ;
  b1 = c ;
}                    
int main(){
  int n ;
  cin >> n ;
  int a[n];
  for(int i=0; i<n ; i++){
    cin>> a[i];
  }
  for(int i=0 ; i<n ; i++){
    cout << a[i]<<" ";
  }
  cout << " Reverse array" << endl ;
  int k =n-1 ;
  for (int i=0 ; i<n/2 ; i++){
    swap (a[i],a[k]);
    k-- ;
  }
  for(int i=0 ; i<n ; i++){
    cout << a[i]<< " " ;
  }
}