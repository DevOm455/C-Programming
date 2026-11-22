//Q.1 write a c program to read two integer and print their sum, difference and product.

#include <stdio.h>
int main(){
    int a, b;

    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int difference = a - b;
    int product = a * b;
    
    printf("%d\n", sum);
    printf("%d\n", difference);
    printf("%d\n", product);

    return 0;
}