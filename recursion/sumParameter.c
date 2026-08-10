#include<stdio.h>
void sum(int n,int s)
{
    // if(n==0) return; //base case
    // sum(n-1,s+n);
    // printf("%d ",s+n);
    if(n==0) {
        printf("%d ",s);
        return;
    }
    sum(n-1,s+n);
    return;
}
int main()
{
    int n;  
    printf("Enter a number: ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}