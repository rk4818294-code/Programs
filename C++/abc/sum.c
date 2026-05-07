#include<stdio.h>
  int sum(int x,int y){
    int c=x+y ;
    return c;
}

int main(){
    int x,y;
    scanf("%d%d",&x,&y);
   int a=  sum(x,y);
   printf("%d",a);
   return 0;
}