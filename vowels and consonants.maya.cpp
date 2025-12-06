#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Convert to lowercase for easy comparison
    ch = tolower(ch);

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("VOWEL
");
    } else {
        printf("CONSONANT
");
    }

    return 0;
}
