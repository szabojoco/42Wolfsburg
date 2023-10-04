/*
Create a recursive function that returns the factorial of the number 
given as a parameter.

If the argument is not valid the function should return 0.

Overflows must not be handled, the function return will be undefined.

Here’s how it should be prototyped:
    int ft_recursive_factorial(int nb);
*/

#include <stdio.h>

int ft_recursive_factorial(int nb) {
    if (nb < 0) {
        return 0;
    } else if (nb == 0 || nb == 1) {
        return 1;
    } else {
        return (nb * ft_recursive_factorial(nb - 1));
    }
}

int main() {
    int result = ft_recursive_factorial(6);
    printf("Factorial: %d\n", result);
    return 0;
}