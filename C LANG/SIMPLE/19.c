#include <stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
   printf("enter value of 6 value");
    scanf("%d\n%d\n%d\n%d\n%d\n%d",&x1,&x2,&x3,&y1,&y2,&y3);
    int m1=(y2-y1)/(x2-x1);
    int m2=(y3-y2)/(x3-x2);
    if(m1==m2){
        printf("it is straight line");
    }
    else{
       printf("it is not straight line");
    }
}