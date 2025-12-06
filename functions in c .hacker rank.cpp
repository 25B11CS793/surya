#include <stdio.h>

// helper function to return max of two numbers
int max(int x, int y) {
    return (x > y) ? x : y;
}

// function to return max of four numbers
int max_of_four(int a, int b, int c, int d) {
    return max(max(a, b), max(c, d));
}

int main() {
    int a, b, c, d;
    
    // read four integers (one per line)
    scanf("%d %d %d %d", &a, &b, &c, &d);
    
    // print the greatest of them
    printf("%d\n", max_of_four(a, b, c, d));
    
    return 0;
}

