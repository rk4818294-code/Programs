#include <stdio.h>
int main()
{
     int x;
    printf("enter the value of x");
    scanf("%d", &x);
    if (x % 3 == 0 && x % 5 == 0)
    {
        printf("the no.is div by 3 and 5");
    }
    else
    {
        printf("the no.is not div by 3 and 5");
    }
}