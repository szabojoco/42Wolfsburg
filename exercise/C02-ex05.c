/*
Create a function that returns 1 if the string given as a parameter contains only uppercase 
alphabetical characters, and 0 if it contains any other character.
Here’s how it should be prototyped:
    int ft_str_is_uppercase(char *str);

It should return 1 if str is empty.
*/
#include <stdio.h>

int ft_str_is_uppercase(char *str) {
    while (*str != '\0') {
        if (!(*str >= 'A' && *str <= 'Z')) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main() {
    printf("%d\n", ft_str_is_uppercase("slvjwsbeckjebv"));
    printf("%d\n", ft_str_is_uppercase("AXBCHB"));
    printf("%d\n", ft_str_is_uppercase("123454654"));
    printf("%d\n", ft_str_is_uppercase(""));
    return 0;
}