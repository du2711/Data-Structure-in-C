#include <stdio.h>

int main(){
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int max=0;
    int maxEle=arr[0];
    if(n<3) printf("Enter atleast 3 elements: ");
    else{
        for(int i=0;i<n-1;i++){
            int count = 0;
            for(int j=0;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                }
            }
            if (count>max){
                max=count;
                maxEle=arr[i];
            }
        }
    }

    printf("Maximum Times Occuring Element is %d for %d times",maxEle,max);
    return 0;
}