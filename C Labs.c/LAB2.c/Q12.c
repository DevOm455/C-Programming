// 12. Take two numbers as input and print the result of all six relational operators (> < >= <= == !=). Note down what values you see (1 or 0). 

#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    printf("a > b = %d\n", a > b);
    printf("a >= b = %d\n", a >= b);
    printf("a < b = %d\n", a < b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    return 0;
}