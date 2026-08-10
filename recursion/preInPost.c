#include<stdio.h>
void preInpost(int n){
    if(n==0) return; //base case
    printf("Pre %d\n",n); //pre
    preInpost(n-1); //in
    printf("In %d\n",n); //in
    preInpost(n-1); //post
    printf("Post %d\n",n); //post
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    preInpost(n);
    return 0;
}