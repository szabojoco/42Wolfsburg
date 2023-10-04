/*
Create a function that displays the number entered as a parameter.
The function has to be able to display all possible values within
an int type variable.
Here’s how it should be prototyped:
    void ft_putnbr(int nb);

For example:
    ft_putnbr(42) displays "42".
*/

#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c) { write(1, &c, 1); }

void	ft_putnbr(int nb) {
  if (nb == -2147483648) {
    ft_putchar('-');
    ft_putchar('2');
    ft_putnbr(147483648);
  } else if (nb < 0) {
    ft_putchar('-');
    nb = -nb;
    ft_putnbr(nb);
  } else if (nb > 9) {
    ft_putnbr(nb / 10);
    ft_putnbr(nb % 10);
  } else {
    ft_putchar(nb + 48);
  }
}

int	main(void) {
  ft_putnbr(1232424);
  return (0);
}

/*
Ez a kód egy C program, amely egy saját `ft_putchar` és `ft_putnbr` függvényt
használ egy egész szám kiírására a standard kimenetre. Most részletesen
elmagyarázom a kódot soronként:

1. `#include <stdio.h>` és `#include <unistd.h>`: Ezek a sorok az `stdio.h` és
az `unistd.h` fejléceket illesztik be a programba. Az `stdio.h` a standard
input/output függvényeket, míg az `unistd.h` az `write` függvényt tartalmazza.

2. `void ft_putchar(char c) { write(1, &c, 1); }`: Itt definiáljuk a
`ft_putchar` függvényt, ami egy karaktert (`char c`) kap bemenetként, majd a
`write` függvényt használja a karakter kiírására a standard kimenetre. Ez a
függvény a karaktert közvetlenül kiírja.

3. `void ft_putnbr(int nb) {`: Ez a sor a `ft_putnbr` függvény definícióját
kezdi. Ez a függvény egy egész számot (`int nb`) kap bemenetként, és feladatja
kiírni ezt a számot a standard kimenetre.

4. `if (nb == -2147483648) { ... }`: Ez az if feltétel ellenőrzi, hogy az `nb`
értéke -2147483648-e, amely a legkisebb 32 bites egész szám, és egyedi kezelést
igényel. Ha igen, akkor kiírjuk a "-" jelet, majd az "2" és a fennmaradó részt
az `ft_putnbr` függvény hívásával.

5. `else if (nb < 0) { ... }`: Ha az `nb` kisebb, mint 0, akkor az `else if` ág
lefut. Itt először kiírjuk a "-" jelet, majd az `nb` értékét pozitívvá
változtatjuk (-nb), és ismételten meghívjuk az `ft_putnbr` függvényt.

6. `else if (nb > 9) { ... }`: Ha az `nb` nagyobb, mint 9, akkor az `else if` ág
lefut. Ebben az esetben az `nb`-t osztjuk 10-zel, majd meghívjuk az `ft_putnbr`
függvényt mind az osztás eredményével, mind pedig az osztás maradékával. Ez a
lépés rekurzív hívást eredményez, amely sorban kiírja a számjegyeket.

7. `else { ... }`: Ha az `nb` nem felel meg az előző feltételeknek, akkor az
`else` ág lefut, és az `nb`-t karakterként írjuk ki a `ft_putchar` függvény
segítségével. A `nb + 48` kifejezés átalakítja az egész számot karakterré, mivel
a számjegyek ASCII kódjaival egyezik meg.

8. `int main(void) { ... }`: Végül a `main` függvény definícióját látjuk, ami a
program belépési pontja. A `ft_putnbr` függvény segítségével kiírjuk a 1232424
számot a standard kimenetre, majd a program visszatérési értéke 0, ami azt
jelzi, hogy a program sikeresen lefutott.

Ez a program tehát egy egyszerű módon mutatja be a rekurziót az egész számok
kiírásához, és kezeli az egyedi esetet is, amikor az egész szám a legkisebb
negatív 32 bites egész szám.*/