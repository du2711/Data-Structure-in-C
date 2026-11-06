#include <stdio.h>

int main(){
    // FILE* ptr=fopen("hi.txt","r");

    // char str[100];

    // while(fgets(str,100,ptr)!=NULL){
    //     printf("%s",str);
    // }

    FILE* ptr= fopen("hi.txt","w");

    char str[]="JAI SHREE RAM!!";
    fputs(str,ptr);
    fclose(ptr);

    printf("\n");
    return 0;
}