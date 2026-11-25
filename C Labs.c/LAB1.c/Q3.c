// 3.	Write a program that declares PI as a constant with value 3.14. Accept the radius from the user and calculate the area.

#include<stdio.h>
int main(){
    const float PI = 3.14;
    float radius, area;
    printf("Enter Radius:");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("area of circle = %f", area);
    return 0;
}