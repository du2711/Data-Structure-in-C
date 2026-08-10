#include <stdio.h>
int main()
{
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    float pi = 3.1415;
    float Area = pi*radius*radius;

    printf("the area of circle is: %f", Area);
    
    return 0;
}

