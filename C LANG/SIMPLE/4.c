#include<stdio.h>
int main(){
    int a=3,b=4;
    int circle= 3.14*a*a;
    int volcube = a*a*a;
    int volsphere=(4*3.14*a*a*a)/3;
    int volcon=(1*b*3.14*a*a)/3;
    printf("%d\n%d\n%d\n%d\n ",circle,volcube,volsphere,volcon);
}