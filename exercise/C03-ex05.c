/*
Reproduce the behavior of the function strlcat (man strlcat).
Here’s how it should be prototyped:
    unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
*/

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int dest_len = 0;
    while(dest[dest_len] && dest_len < size)
        dest_len++;

    unsigned int copied = 0;
    while(src[copied] && dest_len + copied < size - 1) {
        dest[dest_len + copied] = src[copied];
        copied++;
    }  
    dest[dest_len + copied] = '\0';
    return dest_len + copied;
}

int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!!!";
    unsigned int size = sizeof(dest);
    unsigned int result_len = ft_strlcat(dest, src, size);

    printf("Concatenated string: %s\n", dest);
    printf("The length of string: %u\n", result_len);

    return 0;
}