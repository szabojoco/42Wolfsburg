/*
Create a function that takes a pointer to int as a parameter, and sets the value
"42" to that int.

Here’s how it should be prototyped:
    void ft_ft(int *nbr);
*/
#include <stdio.h>

void	ft_ft(int *nbr) { *nbr = 42; }

int	main(void) {
  int number = 21;
  printf("My number before ft_ft is: %d\n", number);
  ft_ft(&number);
  printf("My number after ft_ft is: %d\n", number);
  return (0);
}

/*
Ez a program egy egyszerű példa arra, hogyan módosítsunk egy egész számot egy
függvény segítségével a mutatók használatával. Most részletezem a kódot
soronként:

1. `#include <stdio.h>`: Ez a sor az `<stdio.h>` könyvtárat tartalmazza,
amelynek része a `printf` függvény. A `printf` függvényt használjuk az
eredmények kimeneteléhez a képernyőre.

2. `void ft_ft(int *nbr)`: Itt definiáljuk a saját függvényünket, `ft_ft` néven.
Ez a függvény egy mutatót (`int *nbr`) vár bemenetként, és az általa mutatott
értéket módosítja 42-re.

3. `*nbr = 42;`: Ebben a sorban a függvény megváltoztatja a mutató által
mutatott értéket 42-re. Mivel a `number` változóra mutató mutatót adtunk át a
függvénynek a `ft_ft(&number)` hívással, ezért a `number` értéke 42 lesz.

4. `int main()`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

5. `int number = 21;`: Ebben a sorban definiáljuk az `int` típusú `number`
változót és inicializáljuk 21 értékkel.

6. `printf("My number before ft_ft is: %d\n", number);`: Ebben a sorban
használjuk a `printf` függvényt a `number` értékének kinyomtatására a
képernyőre. Ez az érték eredetileg 21.

7. `ft_ft(&number);`: Ebben a sorban hívjuk meg a `ft_ft` függvényt, és átadjuk
neki a `number` változóra mutató mutatót. Ennek eredményeként a `number` értéke
módosul 42-re.

8. `printf("My number after ft_ft is: %d\n", number);`: Ebben a sorban újra
használjuk a `printf` függvényt a `number` értékének kinyomtatására a
képernyőre. Most az érték már 42, mivel a függvény megváltoztatta azt.

9. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program bemutatja, hogyan módosíthatjuk egy változó értékét egy
függvény segítségével a mutatók használatával. A `number` változó értéke először
21, majd a `ft_ft` függvény hívása után 42 lesz.*/