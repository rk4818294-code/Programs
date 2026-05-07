#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);   // single word

    /* find length */
    for (j = 0; str[j] != '\0'; j++);

    /* check palindrome */
    for (i = 0; i < j / 2; i++) {
        if (str[i] != str[j - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
