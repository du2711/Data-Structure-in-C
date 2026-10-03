#include <stdio.h>

int max(int a,int b){
    return a>b?a:b;
}
int maxSubarraySum(int *arr,int n){
    int curSum=0,maxSum=-500;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        maxSum=max(curSum,maxSum);
        if(curSum<0) curSum=0;
    }
    return maxSum;
}
int main(){
    int n;
    printf("Enter Array size: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter your array: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Maximum Subarray Sum: %d",maxSubarraySum(arr,n));
    return 0;
}