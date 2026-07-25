//remove zeroes from an array in C++ can be done by creating a new array that only includes moves zeroes at the end of the original array. Here's a simple implementation of this approach:

#include <iostream>         
using namespace std;
int main() {
    int arr[] = { 1, 0, 3, 12 ,0 ,3,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; 
        }
    }

    while (count < n) {
        arr[count++] = 0;
    }

    
    cout << "Array after moving zeroes to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}