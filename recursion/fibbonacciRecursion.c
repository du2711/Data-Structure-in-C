#include<stdio.h>
int fibonacci(int a)
{
    if(a==0) return 0; //base case
    if(a==1) return 1; //base case
    int f = fibonacci(a-1) + fibonacci(a-2);
    return f;
}
int main()
{
    int a;
    printf("Enter the position: ");
    scanf("%d",&a);
    int ans=fibonacci(a);
    printf("%d",ans);
    return 0;
}