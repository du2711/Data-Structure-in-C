#include<stdio.h>
int maze(int cr, int cc, int er, int ec)
{
    int rightways =0; int downways=0;
    if(cr==er && cc==ec) return 1; //base case
    if(cr>er || cc>ec) return 0; //base case
    if(cr==er){
        rightways += maze(cr, cc+1, er, ec);
    } //base case
    if(cc==ec) {
        downways += maze(cr+1, cc, er, ec);
    }; //base case
    rightways = maze(cr, cc+1, er, ec);
    downways = maze(cr+1, cc, er, ec);
    int totalways= rightways + downways;
    return totalways;
}
int main()
{
    int a,b;  
    printf("Enter no. of rows of maze: ");
    scanf("%d",&a);
    printf("Enter no. of columns of maze: ");
    scanf("%d",&b);
    int ways=maze(1,1,a,b);
    printf("%d",ways);
    return 0;
}