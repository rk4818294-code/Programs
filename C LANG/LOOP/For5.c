#include<stdio.h>
int main(){
    int n=6;
for(int i = 1;i<=n;i++){
       for(int J= 1;J<=n;J++){
        if(i+J==n+1){
            printf("*");
        }
        else{
         printf("%d",J);
        }
       }
        printf("\n");
}
}