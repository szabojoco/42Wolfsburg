/*
Create an iterated function that returns a number. This number is the result 
of a factorial operation based on the number given as a parameter.

If the argument is not valid the function should return 0.

Overflows must not be handled, the function return will be undefined.

Here’s how it should be prototyped:
    int ft_iterative_factorial(int nb);
*/

#include <stdio.h>

int ft_interative_factorial(int nb) {
    int i = 1;
    int fact = 1;
    if (nb < i) {
        return 0;
    }
    while (i <= nb) {
        fact *= i;
        i++;
    }
    return fact;
}

int main() {
    int result = ft_interative_factorial(6);
    printf("Factorial: %d\n", result);
    return 0;
}