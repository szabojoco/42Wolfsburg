/*
Reproduce the behavior of the function strcmp (man strcmp).
Here’s how it should be prototyped:
    int ft_strcmp(char *s1, char *s2);
*/
#include <stdio.h>

int ft_strcmp(char *s1, char *s2) {
    while(*s1 != '0' || *s2 != '0') {
        if (*s1 != *s2) {
            return *s1 - *s2;
        }
        s1++;
        s2++;
    }
    return 0;
}

int main() {
    char str1[] = {"This is my first str."};
    char str2[] = {"This is my second str."};
    int result = ft_strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal");
    } else if (result < 0) {
        printf("The 1 string is the winner :)");
    } else {
        printf("The 2 string is the winner :)");
    }
    return 0;
}
