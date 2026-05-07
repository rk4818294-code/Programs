#include <stdio.h>
int main()
{
    int x;
    printf("enter the value of x");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        printf("the no.is even\n");
    }
    else
    {
        printf("the no. is odd\n");
    }
    int t, y, z;
    printf("enter the value of t,y,z");
    scanf("%d\n%d\n%d",&t,&y,&z);
    int sum = t + y + z;
    if (sum > 1000)
    {
        printf("the sum is greater than 1000\n");
    }
    else
    {
        printf("the sum is not greater than 1000\n");
    }

   
    int a, b, c;
    printf("enter the value of a");
    scanf("%d", &a);
    printf("enter the value of b");
    scanf("%d", &b);
    printf("enter the value of c");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("it is triangle");
    }
    else
    {
        printf("it is not triangle");
    }
   


}