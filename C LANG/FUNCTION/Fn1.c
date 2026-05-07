// funtion ( no return type / void)
#include<stdio.h>
void area(int a,int b){
    // area of rectangle
    int c= 2*(a+b);
    printf("%d",c);
    printf("\n");
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    area(a,b);
    // area(5,6);
    // area(11,12);
    // area(6,8);

}