/*
Reproduce the behavior of the function strncpy (man strncpy).
Here’s how it should be prototyped :
    char *ft_strncpy(char *dest, char *src, unsigned int n);
*/
#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) {
    char *original_dest = dest;
    int number;
    number = n;
    while(number > 0 && *src != '\0') {
        *dest = *src;
        dest++;
        src++;
        number--;
    }

    return original_dest;
}

int main() {
    char source[] = {"This is my longest text."};
    char destination[50];
    unsigned int number = 10;
    ft_strncpy(destination, source, number);
    char *destinationPtr = destination;
    while(*destinationPtr != '\0') {
        write(1, destinationPtr, 1);
        destinationPtr++;
    }

    return 0;
}