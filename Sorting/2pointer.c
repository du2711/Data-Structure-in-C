#include <stdio.h>
void sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void sumPair(int arr[],int n, int t){
    arr[n];
    int p=0;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==t){
            printf("(%d,%d) on index (%d,%d)\n",arr[i],arr[j],i,j);
            p++;
            j--;
            i++;
        }
        else if(arr[i]+arr[j]>t){
            j--;
        }
        else{
            i++;
        }
    }
    printf("total no. of pairs: %d",p);
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==t){
//                 p++;
//                 printf("(%d,%d) on index (%d,%d)\n",arr[i],arr[j],i,j);
//             }
//         }
//     }
//     if(p==0){
//         printf("No pairs found");
//     }
//     else{
//         printf("total no of pairs: %d",p);
//     }
}
int main(){
    int n;
    printf("Enter no. of your elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter your elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    // for(int i=n-1;i>=0;i--){
    //     printf("%d ",arr[i]);
    // }
    int t;
    printf("Enter your Target sum: ");
    scanf("%d",&t);
    sumPair(arr,n,t);
    return 0;
}