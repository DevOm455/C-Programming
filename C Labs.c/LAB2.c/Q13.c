// 13. Declare int a = 10; and use +=, -=, *=, /=, %= one after another, printing a after each step.


#include <stdio.h>
int main()
{
    int a = 10;
    
    printf("Inital value of a = %d\n", a);

    a += 5;
    printf("after a += 5: %d\n", a);


    a -= 3;
    printf("after a -= 3: %d\n", a);

    a *= 2;
    printf("after a *= 2: %d\n", a);

    a /= 2;
    printf("after a /= 2: %d\n", a);

    a %= 1;
    printf("after a %= 1: %d\n", a);

    return 0;
}