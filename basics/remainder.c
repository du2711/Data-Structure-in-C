#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter your Dividend: ");
    scanf("%d" , &a);
    printf("Enter your Divisor: ");
    scanf("%d" , &b);

    //int q= a/b;
    //int r = a-(b*q);
    int r = a % b;
    printf("Your remainder is: %d" , r);

    return a;

}