#include <stdio.h>

int reverse(int n){
    int res=0;
    while(n>0){
        int remain=n%10;
        res=res*10+remain;
        n/=10;
    }
    return res;
}

int numLength(int n){
    int len=0;
    while(n>0){
        len++;
        n/=10;
    }
    return len;
}

int transform(int n){
    int ans=0;
    int rev=reverse(n);
    int len=numLength(n);
    if(len%2==0){
        for(int i=rev;i>0;i/=100){
            int rem=i%10;
            ans=ans*10+rem;
        }
    }
    else{
        n/=10;
        for(int i=rev;i>0;i/=100){
        int rem=i%10;
        ans=ans*10+rem;
        }
    }
    return ans;
}

int main(){
    printf("%d",transform(123456));
    return 0;
}