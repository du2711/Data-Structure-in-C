#include <stdio.h>
void charSwap(char *a,char *b){
    char temp=*a;
    *a=*b;
    *b=temp;
}
void reverse(char str[]){
    int i=0;
    int j=0;
    while(str[j]!='\0') j++;
    j--;
    
    while(i<j){
        charSwap(&str[i],&str[j]);
        i++;
        j--;
    }
}
int main(){
    char str[20]="Hello World";
    reverse(str);
    printf(("%s",str));
    return 0;
}