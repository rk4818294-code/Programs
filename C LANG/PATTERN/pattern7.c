#include<stdio.h>
int main(){
    int n=4;
    for (int i =1;i<=3;i++){
        for (int j=0;j<=3;j++){
            if ((i+j <= n-2)){
                printf(" ");
            }
            else{
                printf("*");
            }
        }
        printf("\n");
    }
    for (int i=n-1;i>=1;i--) {
        for (int space=1; space<=n-i; space++) {
            printf(" ");
        }
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        printf("\n");
}
}
