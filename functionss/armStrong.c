#include <stdio.h>
int power(int b,int p){
    if(p==0) return 1;
    int res=power(b,p/2);
    if(p%2==0) return res*res;
    else return b*res*res;
}
int digits(int n){
    int len=0;
    while(n!=0){
        len++;
        n/=10;
    }
    return len;
}
void armstrong(int n){
    for(int i=1;i<n;i++){
        int pow=digits(i);
        int res=0;
        int temp=i;
        while(temp>0){
        int digit = temp%10;
        res+= power(digit,pow);
        temp/=10;
        }  
        if(res==i) printf("%d ",i);
    }
}
int main(){
    int a;
    printf("Enter n: ");
    scanf("%d",&a);
    armstrong(a);
    return 0;
}