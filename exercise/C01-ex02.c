/*
Create a function that swaps the value of two integers whose addresses are
entered as parameters. Here’s how it should be prototyped : void ft_swap(int *a,
int *b);
*/
#include <stdio.h>

void	ft_swap(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

int	main(void) {
  int a = 5;
  int b = 10;
  printf("Before ft_swap: a = %d, b = %d\n", a, b);
  ft_swap(&a, &b);
  printf("After ft_swap: a = %d, b = %d\n", a, b);
  return (0);
}

/*
Ez a program egy példa arra, hogyan cseréljünk két egész szám értékét egy
függvény segítségével a mutatók használatával. Most részletezem a kódot
soronként:

1. `#include <stdio.h>`: Ez a sor az `<stdio.h>` könyvtárat tartalmazza,
amelynek része a `printf` függvény. A `printf` függvényt használjuk az
eredmények kimeneteléhez a képernyőre.

2. `void ft_swap(int *a, int *b)`: Itt definiáljuk a saját függvényünket,
`ft_swap` néven. Ez a függvény két mutatót (`int *a` és `int *b`) vár
bemenetként, majd megcseréli az általuk mutatott értékeket.

3. `int temp;`: Ebben a sorban létrehozunk egy ideiglenes változót, `temp`
néven, amelyben tároljuk az `a` mutató által mutatott értéket.

4. `temp = *a;`: Ebben a sorban átmásoljuk az `a` mutató által mutatott értéket
a `temp` változóba.

5. `*a = *b;`: Ebben a sorban az `a` mutató által mutatott értéket átmásoljuk az
`b` mutató által mutatott értékbe, így `a` most már az `b` eredeti értékét
tartalmazza.

6. `*b = temp;`: Ebben a sorban az `b` mutató által mutatott értéket átmásoljuk
a `temp` változóból, így `b` most már az `a` eredeti értékét tartalmazza.

7. `int main()`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

8. `int a = 5;` és `int b = 10;`: Ezekben a sorokban definiáljuk az `int` típusú
`a` és `b` változókat, és inicializáljuk őket 5 illetve 10 értékkel.

9. `printf("Before ft_swap: a = %d, b = %d\n", a, b);`: Ebben a sorban
használjuk a `printf` függvényt az `a` és `b` értékeinek kinyomtatására a
képernyőre a cserélés előtt.

10. `ft_swap(&a, &b);`: Ebben a sorban hívjuk meg a `ft_swap` függvényt, és
átadjuk neki az `a` és `b` változókra mutató mutatókat. Ennek eredményeként az
`a` és `b` változók értékei megcserélődnek.

11. `printf("After ft_swap: a = %d, b = %d\n", a, b);`: Ebben a sorban
használjuk a `printf` függvényt az `a` és `b` értékeinek kinyomtatására a
képernyőre a cserélés után.

12. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program bemutatja, hogyan cserélhetünk két egész szám értékét egy
függvény segítségével a mutatók használatával. A cserélés előtt `a` értéke 5,
`b` értéke 10, majd a cserélés után `a` értéke 10, `b` értéke pedig 5 lesz.*/