#include <stdio.h>
int main(){
     int x;
    printf("enter the value of x");
    scanf("%d", &x);
    if (91 < x && x < 100)
    {
        printf("excellent");
    }
    else if (81 < x && x < 90)
    {
        printf("very good");
    }
    else if (71 < x && x < 80)
    {
        printf("good");
    }
    else if (61 < x && x < 70)
    {
        printf("normal");
    }
    else if (51 < x && x < 60)
    {
        printf("avg");
    }
    else if (41 < x && x < 50)
    {
        printf("fail");
    }
}