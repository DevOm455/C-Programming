// Q7. Take two integers from the user and print their sum, difference, product and division.

#include<stdio.h>

int main()
{
    int num1, num2;

    printf("Enter Num1:");
    scanf("%d", &num1);

    printf("Enter Num2:");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int division = num1 / num2;

    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Division = %d", division);

    return 0;
}