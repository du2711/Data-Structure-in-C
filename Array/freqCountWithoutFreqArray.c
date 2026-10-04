#include <stdio.h>

void elementCount(int *arr,int n){
    for(int i=0;i<n;i++){

        int already = 0;
        for(int k=0;k<i;k++){
            if(arr[i]==arr[k]) {
                already=1;
                break;
            }
        }
        if(already) continue;

        int count=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]) count++;
        }

        printf("%d occurs %d times\n",arr[i],count);
    }
}

int main(){
    int n;
    printf("Enter number of Elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Element count: \n");
    elementCount(arr,n);
    return 0;
}