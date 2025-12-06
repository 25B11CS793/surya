#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[100];
    char sen[100];
    
    // Read a single character
    scanf("%c", &ch);
    
    // Read a string (no spaces)
    scanf("%s", s);
    
    // Read a sentence (with spaces)
    scanf("\n"); // consume the newline left by previous input
    scanf("%[^\n]%*c", sen);
    
    // Print outputs
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    
    return 0;
}

