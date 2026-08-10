#include <stdio.h>
#include <math.h>

int main()
{
    int b,c;
    printf("Enter the integer: ");
    scanf("%d" , &b);

    printf("Enter the exponent: ");
    scanf("%d", &c);

    int p =pow((double)b, (double)c);
    printf("%d" ,p);

    return 0;
}