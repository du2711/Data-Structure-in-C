#include <stdio.h>
int main()
{
    float a;
    printf("Enter 1st number: ");
    scanf("%f", &a);
    float b;
    printf("Enter 2nd number: ");
    scanf("%f", &b);
    float c=a+b;
    printf("The sum of 2 numbers: %f", c);
    return 0;
}