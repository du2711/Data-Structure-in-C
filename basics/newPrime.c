#include <stdio.h>
int main() {
    int i, j, isPrime;
    
    printf("Prime numbers from 1 to 100 are:\n");
    for(i = 2; i <= 100; i++) {
        isPrime = 1; // Assume i is prime

        for(j = 2; j <= i / 2; j++) {
            if(i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        if(isPrime)
            printf("%d ", i);
    }
    return 0;
}