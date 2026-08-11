#include <stdio.h>
#include<stdlib.h>
int main(){
    //malloc 
    int* ptr=(int*)malloc(10*sizeof(int));
    printf("%d\n",&ptr);
    //calloc
    int* bptr=(int*)calloc(10,4);
    printf("%d\n",&bptr);
    //realloc
    ptr=realloc(90,4);
    printf("%d\n",&ptr);

    return 0;
}