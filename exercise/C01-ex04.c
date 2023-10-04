/*
Create a function ft_ultimate_div_mod with the following prototype:
    void ft_ultimate_div_mod(int *a, int *b);
This function divides parameters a by b. The result of this division is stored
in the int pointed by a. The remainder of the division is stored in the int
pointed by b.
*/
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b) {
  int temp = *a;
  *a = temp / *b;
  *b = temp % *b;
}

int	main(void) {
  int a = 10;
  int b = 22;
  ft_ultimate_div_mod(&a, &b);
  printf("a: %d, b: %d\n", a, b);
  return (0);
}

/*
Ez a program egy példa arra, hogyan számoljuk ki egy osztás eredményét és
maradékát egy függvény segítségével, majd módosítsuk az eredeti változókat a
kiszámolt értékekkel. Részletezzük a kódot soronként:

1. `#include <stdio.h>`: Ez a sor az `<stdio.h>` könyvtárat tartalmazza,
amelynek része a `printf` függvény. A `printf` függvényt használjuk az
eredmények kimeneteléhez a képernyőre.

2. `void ft_ultimate_div_mod(int *a, int *b)`: Itt definiáljuk a saját
függvényünket, `ft_ultimate_div_mod` néven. Ez a függvény két mutatót (`int *a`
és `int *b`) vár bemenetként. A függvény kiszámolja az osztás eredményét és
maradékát, majd az eredményeket az eredeti változókba írja.

3. `int temp = *a;`: Ebben a sorban létrehozunk egy ideiglenes változót, `temp`
néven, és az `a` mutató által mutatott értéket másoljuk bele.

4. `*a = temp / *b;`: Ebben a sorban az `a` mutató által mutatott helyre
elmentjük az osztás eredményét, ami az `a` és `b` osztás eredménye.

5. `*b = temp % *b;`: Ebben a sorban az `b` mutató által mutatott helyre
elmentjük a maradékot, ami az `a` és `b` osztás maradéka.

6. `int main()`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

7. `int a = 10;` és `int b = 22;`: Ezekben a sorokban definiáljuk az `int`
típusú `a` és `b` változókat, és inicializáljuk őket 10 illetve 22 értékkel.

8. `ft_ultimate_div_mod(&a, &b);`: Ebben a sorban hívjuk meg a
`ft_ultimate_div_mod` függvényt, és átadjuk neki az `a` és `b` változókra mutató
mutatókat. A függvény kiszámolja az osztás eredményét és maradékát, majd az
eredményeket az `a` és `b` változókban tárolja.

9. `printf("a: %d, b: %d\n", a, b);`: Ebben a sorban használjuk a `printf`
függvényt az `a` és `b` értékeinek kinyomtatására a képernyőre.

10. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program bemutatja, hogyan számolhatjuk ki egy osztás eredményét és
maradékát egy függvény segítségével, majd módosíthatjuk az eredeti változókat a
kiszámolt értékekkel. Az `a` értéke az osztás eredményét tartalmazza, míg a `b`
értéke a maradékot.*/