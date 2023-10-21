#include <stdio.h>

int main(void)
{
    /*int x;
    printf("x: ");
    scanf("%i", &x);
    printf("x: %i\n", x);*/
    
    char s[4]; // OR char *s, malloc(4), free
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);
}