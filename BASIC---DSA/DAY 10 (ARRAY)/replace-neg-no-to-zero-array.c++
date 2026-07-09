// replace all negative number with 0
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, -3, 8, -1, 0, -7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            arr[i] = 0;
        }
    }
    cout << "Updated Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}