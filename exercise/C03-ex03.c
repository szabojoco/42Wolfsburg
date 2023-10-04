/*
Reproduce the behavior of the function strncat (man strncat).
Here’s how it should be prototyped:
    char *ft_strncat(char *dest, char *src, unsigned int nb);
*/
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb) {
    while(*dest != '\0') {
        dest++;
    }
    while((*src != '\0') && (nb > 0)) {
        *dest = *src;
        dest++;
        src++;
        nb--;
    }
    *dest = '\0';
    return 0;
}

int main() {   
    char destination[50] = "This is the first string, ";
    char source[] = "and this is the second.";
    ft_strncat(destination, source, 10);
    printf("%s\n", destination);
    return 0;
}