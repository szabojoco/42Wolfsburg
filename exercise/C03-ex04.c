/*
Reproduce the behavior of the function strstr (man strstr).
Here’s how it should be prototyped:
    char *ft_strstr(char *str, char *to_find);
*/
#include <stdio.h>

char *ft_strstr(char *str, char *to_find) {
    if (*to_find == '\0') {
        return str;
    }

    while (*str != '\0') {
        char *str_ptr = str;
        char *to_find_ptr = to_find;

        while (*str_ptr == *to_find_ptr && *to_find_ptr != '\0') {
            str_ptr++;
            to_find_ptr++;
        }

        if (*to_find_ptr == '\0') {
            return str;
        }
        str++;
    }
    return NULL;
}

int main() {
    char str[] = {"This is 1 string"};
    char to_find[] = {"is 1"};
    char *result = ft_strstr(str, to_find);

    if (result != NULL) {
        printf("Substring is %ld\n", result - str);
    } else {
        printf("Substring not found\n");
    }
    return 0;
}