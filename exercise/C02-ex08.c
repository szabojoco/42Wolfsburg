/*
Create a function that transforms every letter to lowercase.
Here’s how it should be prototyped:
    char *ft_strlowcase(char *str);

It should return str.
*/
#include <stdio.h>

char *ft_strlowcase(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}

int main() {
    printf("%s\n", ft_strlowcase("TestJOCO"));
}