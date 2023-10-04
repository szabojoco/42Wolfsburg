/*
Create an iterated function that returns the value of a power applied to a 
number.

A power lower than 0 returns 0.

Overflows must not be handled.

We’ve decided that 0 power 0 will returns 1

Here’s how it should be prototyped:
    int ft_iterative_power(int nb, int power);
*/
#include <stdio.h>

int ft_iterative_power(int nb, int power) {
    int result = 1;
    int i = 0;
    if (power < 0) {
        return 0;
    } else if (power == 0) {
        return 1;
    } else {
        while (i < power) {
            result *= nb;
            i++;
        }
        return result;
    }
}

int main() {
    int result = ft_iterative_power(2, 3);
    printf("%d\n", result);
    return 0;
}