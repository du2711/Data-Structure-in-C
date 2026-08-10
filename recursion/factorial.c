#include<stdio.h>
int facto(int n){
    if(n==0) return 1;  //base case
    else
    return n*facto(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int fact=facto(n);
    printf("%d",fact);
    return 0;
}