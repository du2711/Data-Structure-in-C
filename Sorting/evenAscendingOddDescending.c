#include <stdio.h>

void numSwap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                numSwap(&arr[i],&arr[j]);
            }
        }
    }
}

int main(){
    int n;
    printf("Enter size of array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);

    for(int i=0;i<n;i++){
        if(arr[i]%2==0) printf("%d ",arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        if(arr[i]%2!=0) printf("%d ",arr[i]);
    }
    return 0;
}