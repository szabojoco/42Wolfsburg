/*
Create a function that displays a number in a base system in the terminal.

This number is given in the shape of an int, and the radix in the shape
of a string of characters.

The base-system contains all useable symbols to display that number:
    0123456789 is the commonly used base system to represent decimal numbers
    01 is a binary base system;
    0123456789ABCDEF an hexadecimal base system;
    poneyvif is an octal base system.

The function must handle negative numbers.

If there’s an invalid argument, nothing should be displayed. Examples of
invalid arguments:
    base is empty or size of 1;
    base contains the same character twice;
    base contains + or -;

Here’s how it should be prototyped:
    void ft_putnbr_base(int nbr, char *base);
*/

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c) { write(1, &c, 1); }

int	ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

int	checkerror(char *str) {
  int i;
  int j;
  int x;

  x = ft_strlen(str);
  i = 0;
  if (str[0] == '\0' || x == 1)
    return (0);
  while (str[i] != '\0') {
    if (str[i] <= 32 || str[i] == 127 || str[i] == 43 || str[i] == 45)
      return (0);
    j = i + 1;
    while (j < ft_strlen(str)) {
      if (str[i] == str[j])
        return (0);
      j++;
    }
    i++;
  }
  return (1);
}

void	ft_putnbr_base(int nbr, char *base) {
  int len;
  int error;
  long nb;

  error = checkerror(base);
  len = ft_strlen(base);
  nb = nbr;
  if (error == 1) {
    if (nb < 0) {
      ft_putchar('-');
      nb *= -1;
    }
    if (nb < len)
      ft_putchar(base[nb]);
    if (nb >= len) {
      ft_putnbr_base(nb / len, base);
      ft_putnbr_base(nb % len, base);
    }
  }
}

int	main(void) {
  ft_putnbr_base(-12, "01");
  printf("\n");
  ft_putnbr_base(40, "poneyvif");
  printf("\n");
  ft_putnbr_base(894867, "0123456789");
  printf("\n");
  ft_putnbr_base(53, "0123456789abcdef");
}

/*
Ez a C program egy saját `ft_putnbr_base` függvényt használ, hogy kiírja egy
egész számot a megadott számrendszerben a standard kimenetre. A program először
ellenőrzi, hogy a megadott számrendszer érvényes-e (nem tartalmaz-e hibás
karaktereket vagy ismétlődő karaktereket), majd kiírja az egész számot a
megfelelő számrendszerben. Most részletesen elmagyarázom a kódot soronként:

1. `#include <stdio.h>` és `#include <unistd.h>`: Ezek a sorok beillesztik a
szükséges fejléceket a programba, beleértve az `unistd.h`-t a `write` függvény
használatához.

2. `void ft_putchar(char c) { write(1, &c, 1); }`: Ez a függvény egy karaktert
kap bemenetként (`char c`) és kiírja azt a standard kimenetre a `write` függvény
segítségével.

3. `int ft_strlen(char *str) { ... }`: Ez a függvény egy karakterlánc hosszát
számolja meg, visszaadva az értéket.

4. `int checkerror(char *str) { ... }`: Ez a függvény ellenőrzi, hogy a megadott
számrendszer érvényes-e. Ha talál hibás karaktereket vagy ismétlődő
karaktereket, akkor 0-t ad vissza, különben 1-t.

5. `void ft_putnbr_base(int nbr, char *base) { ... }`: Ez a függvény felelős az
egész szám kiírásáért a megadott számrendszerben. Először ellenőrzi az
érvényességet a `checkerror` függvény segítségével. Majd kiszámolja a
számrendszer hosszát (`len`) és kezeli a negatív számokat. Végül kiírja az egész
számot a megfelelő számrendszerben.

6. `int main(void) { ... }`: A `main` függvény definíciójában teszteljük a
`ft_putnbr_base` függvényt néhány példa esetén. Minden példa után kiírunk egy új
sort (`printf("\n");`) a kimeneten.

A program futtatásakor a következő eredményt kapjuk:

- Az `-12` egész számot kiírja a "01" számrendszerben, ami eredményezi a "-1100"
kiírást.
- A `40` egész számot kiírja a "poneyvif" számrendszerben, ami eredményezi a
"pe" kiírást.
- A `894867` egész számot kiírja a "0123456789" számrendszerben, ami eredményezi
a "894867" kiírást.
- A `53` egész számot kiírja a "0123456789abcdef" számrendszerben, ami
eredményezi a "35" kiírást.

Minden kiírás a megfelelő számrendszerben történik a `ft_putnbr_base` függvény
segítségével.*/