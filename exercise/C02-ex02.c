/*
Create a function that returns 1 if the string given as a parameter contains only alphabetical characters, 
and 0 if it contains any other character.
Here’s how it should be prototyped :
    int ft_str_is_alpha(char *str);
    
It should return 1 if str is empty.
*/
#include <stdio.h>

int ft_str_is_alpha(char *str) {
    if (*str == '\0') {
        return 1;
    }
    while(*str != '\0') {
        if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main() {
    printf("%d\n", ft_str_is_alpha("1"));
    printf("%d\n", ft_str_is_alpha("Hello"));
    printf("%d\n", ft_str_is_alpha("Hello1234"));
    return 0;
}