//6.	Take an int as input using scanf and then a character using getchar(). Observe the leftover newline problem, then fix it by adding one extra getchar().

#include<stdio.h>

int main()
{
    int num;
    char ch;

    printf("Enter a number:");
    scanf("%d", &num);

    getchar();

    printf("Enter a character:");
    ch = getchar();

    printf("\nNumber = %d", num);
    printf("\nCharacter = %c", ch);

    return 0;

}