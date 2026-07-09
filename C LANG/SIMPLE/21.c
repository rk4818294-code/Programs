#include <stdio.h>
int main(){
    int x,y;
    printf("enter the value of x,y");
    scanf("%d\n%d",&x,&y);
    if(x%y==0){
        printf("x is divisible by y");
    }
    else{
        printf("x is not divisible by y");
    }
}