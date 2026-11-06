#include <stdio.h>
#include<stdbool.h>
#include<stdlib.h>

int main(){
    // size janne ke liye
    int a= sizeof(bool);
    printf("%d\n",a);
    
    int n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);

    // memory allocation ke liye
    int* ptr = (int*)malloc(n*sizeof(int));
    printf("%d",ptr);
    
    return 0;
}