#include <stdio.h>

int main() {
    int hurl, spin, speed;
    scanf("%d %d %d", &hurl, &spin, &speed);

    int cond1 = (hurl > 50);
    int cond2 = (spin > 60);
    int cond3 = (speed > 100);

    if (cond1 && cond2 && cond3) {
        printf("10
");
    } else if (cond1 && cond2) {
        printf("9
");
    } else if (cond2 && cond3) {
        printf("8
");
    } else if (cond1 && cond3) {
        printf("7
");
    } else if (cond1 || cond2 || cond3) {
        printf("6
");
    } else {
        printf("5
");
    }

    return 0;
}
