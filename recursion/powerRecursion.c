#include<stdio.h>
int power(int a, int b)
{
    // for(int i=0;i<b;i++)
    // {
    //     power = power * a;
    // }
    // printf("%d",power);
    // return power;
    if(b==0) return 1; //base case
    int p = a * power(a, b-1);
    return p;} 
int main()
{
    int a,b;  
    printf("Enter Base: ");
    scanf("%d",&a);
    printf("Enter Power: ");
    scanf("%d",&b);
    int ans=power(a,b);
    printf("%d",ans);
    return 0;
}