// 6.	Take an int as input using scanf and then a character using getchar(). Observe the leftover newline problem, then fix it by adding one extra getchar().



#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("Enter an integer: ");
    scanf("%d", &num);

    getchar();  // Removes leftover newline

    printf("Enter a character: ");
    ch = getchar();

    printf("Number = %d\n", num);
    printf("Character = %c\n", ch);

    return 0;
}