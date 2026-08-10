#include <stdio.h>
int main()
{
    float phy = 90;
    float chem = 91;
    float maths = 92;
    float eng = 93;
    float CS = 94;
    float percent = (phy + chem + maths + eng + CS)/5;

    printf("The percentage is: %f" , percent );
    return 0;
}
