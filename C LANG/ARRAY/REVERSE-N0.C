#include <stdio.h>

int main() {
    int n, arr[20];

    printf("Enter number of digits: ");
    scanf("%d", &n);

    printf("Enter the digits:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  
    }

    printf("Reversed number: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d", arr[i]);
    }

    return 0;
}
