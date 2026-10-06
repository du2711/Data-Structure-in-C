#include <stdio.h>

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