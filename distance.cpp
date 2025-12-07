#include <stdio.h>

int main() {
    int X, Y;
    
    // Read input: fuel in litres and distance in km
    scanf("%d %d", &X, &Y);
    
    // Calculate maximum distance Pavan can travel
    int maxDistance = X * 5;
    
    // Check if he can reach home
    if (maxDistance >= Y) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}