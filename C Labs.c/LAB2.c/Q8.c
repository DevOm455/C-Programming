// Q8. Take an int and then a char as input. First write it with scanf("%c", ...) (without the space) and observe what goes wrong. Then fix it using scanf(" %c", ...). Write what you observed in a comment.

/*
#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("Number = %d\n", num);
    printf("Character = %c\n", ch);

    return 0;
}
*/

#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Number = %d\n", num);
    printf("Character = %c\n", ch);

    return 0;
}

/*
Without space in %c, scanf reads the leftover newline.
Adding a space before %c skips whitespace and reads the actual character.
*/