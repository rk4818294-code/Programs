#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0;
    for(int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];   
    }
    int total = n*(n + 1)/2; 
    int missing = total - sum;
    printf(" %d", missing);
}