#include <iostream> 
using namespace std; 
 
int main() { 
    int N; 
 
    cout << "Enter size of array: "; 
    cin >> N; 
 
    int arr[N]; 
 
    cout << "Enter " << N << " elements: "; 
    for (int i = 0; i < N; i++) { 
        cin >> arr[i]; 
    } 
 
    int smallest = arr[0]; 
 
    for (int i = 1; i < N; i++) { 
        if (arr[i] < smallest) { 
            smallest = arr[i]; 
        } 
    } 
 
    cout << "Smallest element: " << smallest << endl; 
 
    return 0; 
} 