/*
Reproduce the behavior of the function strncmp (man strncmp).
Here’s how it should be prototyped:
    int ft_strncmp(char *s1, char *s2, unsigned int n);
*/
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n) {
    while(n > 0 && (*s1 != '\0' || *s2 != '\0')) {
        if(*s1 != *s2) {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
        n--;
    }
    return 0;
}

int main() {
    char str1[] = "This is the 1 string";
    char str2[] = "This is the 2 string";
    int result = ft_strncmp(str1, str2, 13);

    if(result == 0) {
        printf("The strings are equal");
    } else if (result < 0) {
        printf("The s1 is before s2");
    } else {
        printf("The s1 is after s2");
    }

    return 0;
}