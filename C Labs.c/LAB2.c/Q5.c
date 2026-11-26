// 5.	Take a character as input and print the next character in the alphabet using putchar(ch + 1). Then print its ASCII value.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a character:");
    ch = getchar();

    printf("\nNext character:");
    putchar(ch + 1);

    printf("\nASCII value of next character: %d", ch + 1);
    return 0;
}