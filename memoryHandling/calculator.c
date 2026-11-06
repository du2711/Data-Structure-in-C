#include <stdio.h>

int main(){
    int a,b;
    printf("Enter a: ");
    scanf("%d",&a);
    char ch;
    printf("Enter operation(+,-*,/): ");
    scanf(" %c",&ch);

    printf("Entar b: ");
    scanf("%d",&b);

    switch(ch){
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",(float)a/b);
            break;
        default:
            printf("Enter valid input");
    }
    return 0;
}