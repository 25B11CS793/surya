#include <stdio.h>
int main() {
    int X1, Y1, X2, Y2;
    scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
    int sum1 = X1 + Y1;
    int sum2 = X2 + Y2;
    if(sum1 < sum2)
        printf("%d", sum1);
    else
        printf("%d", sum2);
    return 0;
}