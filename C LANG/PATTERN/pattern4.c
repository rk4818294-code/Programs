#include <stdio.h>
int main(){
    int n=5;
    for(int i=0;i<=5;i++){
        for(int j=0;j<=5;j++){
            if(j<i){
                printf(" ");
            }
            else if (j<5-i) {
                printf("* ");
            }
        }
        printf("\n");
    }
}