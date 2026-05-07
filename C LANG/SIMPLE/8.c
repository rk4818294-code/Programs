#include <stdio.h>
int main(){
    int x, y, z;
    printf("enter the value of x.y,z");
    scanf("%d%d%d", &x, &y, &z);
    int sum = (x + y + z);
    printf("%d", sum);
}