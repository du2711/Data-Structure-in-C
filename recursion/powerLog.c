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
    if(b==1) return a; //base case
    if(b%2 ==0){
        int p = power(a, b/2) * power(a, b/2);
    }
    
    else{
        return a * power(a, b-1);
    } 
}
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