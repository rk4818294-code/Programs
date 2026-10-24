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
 
    int target; 
    cout << "Enter target: "; 
    cin >> target; 
 
     
    for (int i = 0; i < N; i++) { 
        for (int j = i + 1; j < N; j++) { 
            if (arr[i] + arr[j] == target) { 
                cout << i << " " << j << endl; 
                return 0; 
            } 
        } 
    } 
 
    return 0; 
}