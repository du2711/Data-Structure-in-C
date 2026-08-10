#include<stdio.h>
void increasing(int n){ // int x
    // if(x>n) return; //base case
    if(n==0) return; //base case
    printf("%d\n",n);
    increasing(n-1); //x+1
    printf("%d\n",n);
    return;
}
int main()
{
    int n;  
    printf("Enter a number: ");
    scanf("%d",&n);
    increasing(n);
    return 0;
}
