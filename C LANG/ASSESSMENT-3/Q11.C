#include <stdio.h>

int main() {
    int n;
    int sum=0;
    printf("Enter number of elements: ");
    scanf("%d", &n);
     int arr[n];
    printf(" %d\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0) {
            sum += arr[i];
 }
    }

    printf(" %d\n", sum);

    return 0;
}