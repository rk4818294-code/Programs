#include <stdio.h>

int product_arr(int arr[], int n) {
    int product = 1;
    for(int i = 0; i < n; i++) {
        product *= arr[i];
    }
    for(int j = 0; j < n; j++) {
        arr[j] = product / arr[j];
    }

    for(int k = 0; k < n; k++) {
        printf("%d ", arr[k]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    product_arr(arr, n);

}