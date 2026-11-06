#include <stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n,i=0;
    while(i<45000){
        printf("chalta hu chalate raho! \n");
        ptr=(int*)malloc(45001*sizeof(int));
        i++;
        if(i%1000==0) scanf("%d",&n);
        free(ptr);      // to prevent memory Leak
    }
    return 0;
}