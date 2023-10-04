/*
Create a function that returns 1 if the string given as a parameter contains only lowercase alphabetical 
characters, and 0 if it contains any other character.
Here’s how it should be prototyped:
    int ft_str_is_lowercase(char *str);
It should return 1 if str is empty.
*/
#include <stdio.h>

int ft_str_is_lowercase(char *str) {
    char first = 'a';
    char last = 'z';
    if (*str == '\0') {
        return 1;
    }

    while(*str != '\0') {
        if (!((*str >= first && *str <= last))) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main() {
    printf("%d\n", ft_str_is_lowercase(""));
    printf("%d\n", ft_str_is_lowercase("sdvsbse"));
    printf("%d\n", ft_str_is_lowercase("Avsrbrb1"));
    printf("%d\n", ft_str_is_lowercase("advsbvv00"));
    return 0;
}