#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100];   // buffer to store input string
    
    // Read input string from stdin
    fgets(s, sizeof(s), stdin);
    
    // Print required output
    printf("Hello, World!\n");
    printf("%s", s);   // print the input string
    
    return 0;
}

