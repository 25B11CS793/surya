#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b) {
    int sum = *a + *b;                 // calculate sum
    int diff = *a - *b;                // calculate difference
    if (diff < 0) diff = -diff;        // absolute difference
    
    *a = sum;                          // update value at pointer a
    *b = diff;                         // update value at pointer b
}

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d\n", a, b);
    
    return 0;
}

