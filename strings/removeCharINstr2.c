#include <stdio.h>

void removeChars(char str[],char rem[]){
    for(int i=0;str[i]!='\0';i++){
        int found = 0;
        for(int j=0;rem[j]!='\0';j++){
            if(str[i]==rem[j]){
                found=1;
                break;
            }
        }
        if(!found) printf("%c",str[i]);
    }
}

int main(){
    char string[50],remove[50];
    printf("Enter main string: ");
    scanf("%s",string);

    printf("Enter remove character string: ");
    scanf("%s",remove);

    removeChars(string,remove);
    return 0;
}