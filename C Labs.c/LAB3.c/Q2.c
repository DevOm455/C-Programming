//Q2. Find the Largest of Two Numbers Using If-Else

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        printf("A is largest");
    }
    else if (b > a)
    {
        printf("B is largest");
    }
    else
    {
        printf("Both numbers are equal");
    }

    return 0;
}