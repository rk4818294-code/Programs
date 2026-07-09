#include <iostream>
using namespace std;

int main(){
    int n;
    int arr[] = {1, 2, 3, 4};
    int sum = 0;
    int ar2[4] ;
    for (int i = 0; i < 4; i++){
       ar2[i] = arr[i]+sum ;
      //  arr[i] = arr[i] + sum;
        sum = sum + arr[i];
    }

    for (int i = 0; i < 4; i++){
        cout << ar2[i] << " ";
    }
}