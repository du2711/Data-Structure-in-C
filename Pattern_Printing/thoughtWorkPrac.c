#include <stdio.h>

int hcf(int a,int b){
    while(b>0){
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

int lcm(int a,int b){
    return (a*b)/hcf(a,b);
}

void pat1(int n){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf(" / ");
    }
}

void pat2(int n){
    for(int i=1;i<n+1;i++){
        for(int j=1;j<=i;j++){
            printf("%d",i);
        }
        printf(" / ");
    }
}

void pat3(int n){
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }
        printf(" / ");
    }
}

int main(){
    int n;
    printf("Entre n: ");
    scanf("%d",&n);
    pat1(n);
    printf("\n");
    pat2(n);
    printf("\n");
    pat3(n);
    printf("\n");
    return 0;
}