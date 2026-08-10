#include<stdio.h>
int stair (int n)
{
    if(n==0) return 1; //base case
    if(n==1) return 1; //base case
    if (n==2) return 2; //base case
    int s = stair(n-1) + stair(n-2) + stair(n-3);
    return s;
}
int main()
{
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    // printf("Number of ways to reach the top: %d", (1 << (n - 2))); // 2^(n-1)
    printf("Number of ways to reach the top: %d",stair(n));
    return 0;
}