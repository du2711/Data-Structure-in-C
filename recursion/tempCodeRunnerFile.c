#include<stdio.h>
void tower(int n, char s, char h, char d){
    if (n==0) return 0;//base case
    tower(n-1,s,d,h);
    printf("Move disk %d from %c to %c\n",n,s,d);
    tower(n-1,h,s,d);
    return ;
}
int main(){
    int n;
    printf("Enter number of disks: ");
    scanf("%d",&n);
    tower(n,'S','H','D');  
    return 0;
}