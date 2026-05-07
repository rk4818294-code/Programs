#include <stdio.h>
int main(){  
    int a, b, c, d, e;
    printf("enter the value of five no.");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    int greatest = a;
    if ( b>greatest)  greatest =b;
    if (c>greatest) greatest = c;
    if(d>greatest)greatest = d;
    if(e>greatest)greatest=e;
    printf("%d\n",greatest);
}