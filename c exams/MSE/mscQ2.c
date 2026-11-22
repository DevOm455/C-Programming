/*
Q.2 write a c program to classify a person's age as child, teenager, adult or senior citizen using an else if ladder
child: 0 to 12 year
teenager: 13 to 19 year
Adult: 20 to 59 year
Senior citizen: 60 year and above
*/

#include <stdio.h>
int main(){
    int age;

    printf("Enter your Age:");
    scanf("%d", &age);
    
    if(age <= 12)
    {
        printf("you are child");
    }
    else if(age >= 13 && age <= 19)
    {
        printf("you are teenager");
    }
    else if(age >= 20 && age <= 59)
    {
        printf("you are adult");
    }
    else if(age >= 60)
    {
        printf("you are senior citizen");
    }
    else
    {
        printf("age is invalid");
    }
    return 0;
}