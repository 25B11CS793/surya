#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x, &y);

    // Height is the maximum of numerator and denominator
    int height = (x > y) ? x : y;

    printf("%d
", height);

    return 0;
}
