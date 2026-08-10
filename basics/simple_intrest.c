#include <stdio.h>
int main()
{
    float p;
    printf("enter principle: ");
    scanf("%f", &p);
    float r;
    printf("enter rate: ");
    scanf("%f", &r);
    float t;
    printf("enter time: ");
    scanf("%f", &t);
    float si = (p*r*t)/100;
    float a = si + p;
    printf("the total amount is %f" , a);
    printf("\nthe simple interest is: %f" , si);
    return 0;
}
