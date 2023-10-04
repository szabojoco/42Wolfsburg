/*
Create a function ft_div_mod prototyped like this:
    void ft_div_mod(int a, int b, int *div, int *mod);

This function divides parameters a by b and stores the result in the int pointed
by div. It also stores the remainder of the division of a by b in the int
pointed by mod.
*/
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod) {
  *div = a / b;
  *mod = a % b;
}

int	main(void) {
  int a = 15;
  int b = 6;
  int div = 0;
  int mod = 0;
  ft_div_mod(a, b, &div, &mod);
  printf("After: div: %d, mod: %d\n", div, mod);
  return (0);
}

/*
 Ez a program egy példa arra, hogyan számoljuk ki egy osztás eredményét és
maradékát egy függvény segítségével, majd tároljuk ezeket az értékeket mutatók
segítségével. Most részletezem a kódot soronként:

1. `#include <stdio.h>`: Ez a sor az `<stdio.h>` könyvtárat tartalmazza,
amelynek része a `printf` függvény. A `printf` függvényt használjuk az
eredmények kimeneteléhez a képernyőre.

2. `void ft_div_mod(int a, int b, int *div, int *mod)`: Itt definiáljuk a saját
függvényünket, `ft_div_mod` néven. Ez a függvény két egész számot (`int a` és
`int b`) vár bemenetként, valamint két mutatót (`int *div` és `int *mod`),
amelyekre elmenti az osztás eredményét és a maradékot.

3. `*div = a / b;`: Ebben a sorban az osztás eredményét, azaz az `a` és `b`
osztás eredményét, elmentjük a `div` mutató által mutatott helyen.

4. `*mod = a % b;`: Ebben a sorban a maradékot, azaz az `a` és `b` osztás
maradékát, elmentjük a `mod` mutató által mutatott helyen.

5. `int main()`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

6. `int a = 15;` és `int b = 6;`: Ezekben a sorokban definiáljuk az `int` típusú
`a` és `b` változókat, és inicializáljuk őket 15 illetve 6 értékkel.

7. `int div = 0;` és `int mod = 0;`: Ezekben a sorokban definiáljuk az `int`
típusú `div` és `mod` változókat, amelyeket az osztás eredményének és
maradékának tárolására használunk.

8. `ft_div_mod(a, b, &div, &mod);`: Ebben a sorban hívjuk meg a `ft_div_mod`
függvényt, és átadjuk neki az `a` és `b` változókat, valamint a `div` és `mod`
változókra mutató mutatókat. Ennek eredményeként a függvény kiszámolja az osztás
eredményét és maradékát, majd elmenti azokat a megfelelő változókba.

9. `printf("After: div: %d, mod: %d\n", div, mod);`: Ebben a sorban használjuk a
`printf` függvényt az osztás eredményének és maradékának kinyomtatására a
képernyőre.

10. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program bemutatja, hogyan számolhatjuk ki egy osztás eredményét és
maradékát egy függvény segítségével, majd tárolhatjuk ezeket mutatók
segítségével. Az eredményeket a `div` és `mod` változókban találod meg a
függvény meghívása után.*/