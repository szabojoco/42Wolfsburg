/*
Reproduce the behavior of the function strcat (man strcat).
Here’s how it should be prototyped:
    char *ft_strcat(char *dest, char *src);
*/
#include <stdio.h>

char *ft_strcat(char *dest, char *src) {
    char *original_dest = dest;
    while(*dest != '\0') {
        dest++;
    }
    while(*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return original_dest;
}

int main() {
    char destination[50] = "Hello, ";
    char source[] = "world";
    ft_strcat(destination, source);
    printf("%s\n", destination);
    return 0;
}