/*
Create a function that returns 1 if the string given as a parameter contains only printable characters, 
and 0 if it contains any other character.
Here’s how it should be prototyped:
    int ft_str_is_printable(char *str);
    
It should return 1 if str is empty.
*/
#include <stdio.h>

int ft_str_is_printable(char *str) {
    while(*str != '\0') {
        if (*str < 32 || *str > 126) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main() {
    printf("%d\n", ft_str_is_printable("Hello, world"));
    printf("%d\n", ft_str_is_printable("Printable characters"));
    printf("%d\n", ft_str_is_printable("Not printable\x07"));
    printf("%d\n", ft_str_is_printable(""));
    return 0;
}