/*
Write a function that converts the initial portion of the string pointed
by str to its int representation

The string can start with an arbitray amount of whitespace
(as determined by is space(3))

The string can be followed by an arbitrary amount of + and - signs, - sign
will change the sign of the int returned based on the number of - is odd or
even.

Finally the string can be followed by any numbers of the base 10.

Your function should read the string until the string stop following the
rules and return the number found until now.

You should not take care of overflow or underflow. result can be undefined
in that case.

Here’s an example of a program that prints the atoi return value:
$>./a.out " ---+--+1234ab567"
-1234

Here’s how it should be prototyped:
    int ft_atoi(char *str);
*/
#include <stdio.h>

int	whitespaces(char *str, int *ptr_i) {
  int count;
  int i;

  i = 0;
  count = 1;
  while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
    i++;
  while ((str[i] == 43 || str[i] == 45)) {
    if (str[i] == 45)
      count *= -1;
    i++;
  }
  *ptr_i = i;
  return (count);
}

int	ft_atoi(char *str) {
  int sign;
  int result;
  int i;

  result = 0;
  sign = whitespaces(str, &i);
  while (str[i] && str[i] >= 48 && str[i] <= 57) {
    result *= 10;
    result += str[i] - 48;
    i++;
  }
  result *= sign;
  return (result);
}

int	main(void) {
  char *s = "   ---+--+01234506789ab567";
  printf("%d", ft_atoi(s));
}

/*
Ez a kód egy C program, amely egy saját `ft_atoi` függvényt használ egy
karakterlánc átalakítására egész számmá, majd ezt a számot kiírja a képernyőre.
Most részletesen elmagyarázom a kódot soronként:

1. `#include <stdio.h>`: Ez a sor beilleszti a standard input/output fejlécét a
programba, ami szükséges a `printf` függvény használatához.

2. `int whitespaces(char *str, int *ptr_i) {`: Itt kezdődik a `whitespaces`
függvény definíciója. Ez a függvény két bemeneti paramétert kap: egy karakter
pointert (`char *str`), ami a bemeneti karakterláncot reprezentálja, és egy
egész szám pointert (`int *ptr_i`), ami egy mutató a karakterlánc aktuális
pozíciójának tárolására.

3. `int count; int i;`: Itt deklaráljuk a `count` és `i` nevű egész számokat,
amelyeket a függvényben használunk a szóközök és előjel karakterek észlelésére.

4. `i = 0; count = 1;`: Inicializáljuk az `i`-t 0-val, és a `count`-ot 1-gyel.
Az alapértelmezett előjel pozitív.

5. Az első `while` ciklus azt ellenőrzi, hogy az `i` pozícióban lévő karakter
szóköz-e (`str[i] == 32`) vagy a 9 és 13 közötti karakterek közé esik-e. Ha
igen, akkor az `i` értékét növeljük, és a `count` értékét megtartjuk 1-ben.

6. A második `while` ciklus azt ellenőrzi, hogy az `i` pozícióban lévő karakter
plusz (`43`) vagy mínusz (`45`) karakter-e. Ha talál ilyen karaktereket, akkor a
`count` értékét az előjel alapján változtatjuk meg (-1 lesz, ha találunk egy
mínusz jelet), majd növeljük az `i` értékét.

7. `*ptr_i = i;`: Ebben a sorban a függvény az `i` értékét eltárolja a `ptr_i`
mutató által mutatott helyen, hogy aztán a `ft_atoi` függvény használhassa.

8. `return (count);`: A `whitespaces` függvény visszaadja a `count` értékét, ami
az előjel értékét jelzi.

9. `int ft_atoi(char *str) {`: Itt kezdődik a `ft_atoi` függvény definíciója,
amely egy egész számot fog visszaadni. Ez a függvény egy karakter pointert kap
bemenetként (`char *str`), ami a karakterláncot reprezentálja.

10. `int sign; int result; int i;`: Itt deklaráljuk a `sign` (előjel), `result`
(eredmény) és `i` változókat, amelyeket a függvényben használunk.

11. `result = 0; sign = whitespaces(str, &i);`: Inicializáljuk az `result`-t
nullával, majd meghívjuk a `whitespaces` függvényt, aminek az eredményét
eltároljuk a `sign` változóban, és az `i` változóban tárolt pozíciót is
frissítjük.

12. A következő `while` ciklus azt ellenőrzi, hogy az `i` pozícióban lévő
karakter számjegy-e (48 és 57 közötti érték). Ha igen, akkor az `result`
változót 10-szeresére szorozzuk és hozzáadjuk az aktuális karakter értékét. Az
aktuális karakter értéke kivonja 48-tól, hogy megkapjuk az egész szám értékét.

13. `result *= sign;`: Az `ft_atoi` függvény végén szorozzuk az `result` értékét
az előjellel (`sign`), hogy helyesen kezeljük a pozitív és negatív számokat.

14. `return (result);`: A `ft_atoi` függvény visszaadja az `result` értékét, ami
az átalakított egész számot tartalmazza.

15. `int main(void) { ... }`: A `main` függvény definíciójában inicializáljuk a
`s` karakter pointert egy karakterlánccal, majd meghívjuk a `ft_atoi` függvényt
ezzel a karakterlánccal, és az eredményt kiírjuk a képernyőre a `printf`
függvény segítségével.

A program kimenete a `s` karakterlánc alapján az átalakított egész szám, amelyet
a `ft_atoi` függvény számolt ki a karakterlánccal. Ebben a példában a kimenet a
karakterlánc "01234506789ab567" részéből átalakított egész szám, ami 1234506789,
tehát ez lesz kiírva a képernyőre.*/