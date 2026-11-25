// 5.	Take a character as input and print the next character in the alphabet using putchar(ch + 1). Then print its ASCII value.

#include<stdio.h>

int main()
{
    char ch;

    printf("Enter a charecter:");
    ch = getchar();

    printf("\nNext charecter:");
    putchar(ch + 1);

    printf("\nASCII value of next charecter: %d", ch + 1);
    
    return 0;
}