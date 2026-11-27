//10. Declare the rate of interest as a constant RATE = 5.0. Accept the principal and time from the user and calculate simple interest. Note. Formula: SI = (principal * RATE * time) / 100 


#include <stdio.h>

int main()
{
    const float RATE = 5.0;
    float principal, time, SI;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    SI = (principal * RATE * time) / 100;

    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
