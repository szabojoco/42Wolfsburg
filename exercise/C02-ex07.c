/*
Create a function that transforms every letter to uppercase.
Here’s how it should be prototyped:
    char *ft_strupcase(char *str);
    
It should return str.
*/
#include <stdio.h>

char *ft_strupcase(char *str) {
    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

int main() {
    printf("%s\n", ft_strupcase("adjvbskvjsb"));
    return 0;
}