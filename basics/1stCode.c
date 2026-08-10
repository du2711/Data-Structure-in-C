#include <stdio.h>

int main() {
    int x = 5, y;

    // Pre-increment: ++x increments first, then uses the value
    y = ++x;
    printf("After pre-increment (++x):\n");
    printf("x = %d, y = %d\n\n", x, y);  // x = 6, y = 6

    // Reset x
    x = 5;

    // Post-increment: x++ uses the value first, then increments
    y = x++;
    printf("After post-increment (x++):\n");
    printf("x = %d, y = %d\n", x, y);    // x = 6, y = 5

    return 0;
}