#include <stdio.h>
int main()
{
    int e,m,h;
    printf("Enter eng marks: ");
    scanf("%d", &e);
    printf("Enter maths marks: ");
    scanf("%d", &m);
    printf("Enter hindi marks: ");
    scanf("%d", &h);
    
    int t = (e+m+h)/3;
    printf("your total is: %d", t);
    return  0;

}
