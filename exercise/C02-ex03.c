/*
Create a function that returns 1 if the string given as a parameter contains only digits, 
and 0 if it contains any other character.

Here’s how it should be prototyped :
    int ft_str_is_numeric(char *str);
    
It should return 1 if str is empty.
*/
#include <stdio.h>

int ft_str_is_numeric(char *str) {
    while(*str != '\0') {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }
    return 1;
}

int main(void) {
    printf("%d\n", ft_str_is_numeric(""));
    printf("%d\n", ft_str_is_numeric("123"));
    printf("%d\n", ft_str_is_numeric("23da"));
    return 0;
}