#include<stdio.h>
int main() {
    int a[100], n, i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position: ",n-1);
    scanf("%d", &pos);

    if(pos>=0 && pos<n){
        printf("Enter at position  %d=%d\n",pos,a[pos]);
    }

 else {

    printf("invalid position");
 }
    return 0;
}
