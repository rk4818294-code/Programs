// string / char Array
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", arr);
    // fgets(arr,100,stdin);
    printf("%s", arr);
}