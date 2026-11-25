//4.	Take a character using getchar() and print it using putchar().

#include<stdio.h>
int main(){
    char ch;
    printf("Enter a charecter:");
    ch = getchar();
    printf("you enterd:");
    putchar(ch);
    return 0;
}