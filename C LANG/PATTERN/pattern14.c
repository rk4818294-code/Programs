#include <stdio.h>
int main()
{
    int m, num = 1;
    printf("enter the row and column: ");
    scanf("%d", &m);
    for (int i = m; i > 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num = num + 1;
        }
        printf("\n");
    }
}