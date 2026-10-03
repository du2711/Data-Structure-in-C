#include<stdio.h>
int main()
{
    int l , b;
    int area = l*b;
    int perimeter = 2*(l+b);

    printf("Enter length: ");
    scanf("%d" , &l);
    
    printf("Enter Breadth: ");
    scanf("%d" , &b);

    if(area>perimeter){
        printf("area is greater than perimeter ");
    }
    else{
        printf("perimter is  greater than area");
    }

    return 0;
}