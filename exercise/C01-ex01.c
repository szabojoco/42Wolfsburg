/*
Create a function that takes a pointer to pointer to pointer to pointer to
pointer to pointer to pointer to pointer to pointer to int as a parameter and
sets the value "42" to that int. Here’s how it should be prototyped : void
ft_ultimate_ft(int *********nbr);
*/
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr) { *********nbr = 42; }

int	main(void) {
  int number = 20;
  int *ptr1 = &number;
  int **ptr2 = &ptr1;
  int ***ptr3 = &ptr2;
  int ****ptr4 = &ptr3;
  int *****ptr5 = &ptr4;
  int ******ptr6 = &ptr5;
  int *******ptr7 = &ptr6;
  int ********ptr8 = &ptr7;
  int *********ptr9 = &ptr8;

  ft_ultimate_ft(ptr9);
  printf("%d/n", number);

  return (0);
}

/*
Ez a program egy példa arra, hogyan módosítsuk egy egész szám értékét egy
függvény segítségével, amely nagyon mélyen ágyazott mutatókat használ.
Részletezzük a kódot soronként:

1. `#include <stdio.h>`: Ez a sor az `<stdio.h>` könyvtárat tartalmazza,
amelynek része a `printf` függvény. A `printf` függvényt használjuk az
eredmények kimeneteléhez a képernyőre.

2. `void ft_ultimate_ft(int *********nbr)`: Itt definiáljuk a saját
függvényünket, `ft_ultimate_ft` néven. Ez a függvény egy mutatót (`int
*********nbr`) vár bemenetként, amely nagyon mélyen ágyazott mutatókat
tartalmaz. A függvény az általa mutatott értéket 42-re módosítja.

3. `*********nbr = 42;`: Ebben a sorban a függvény megváltoztatja a legmélyebb
szinten lévő mutató által mutatott értéket 42-re. Mivel a `ptr9` mutatót adtuk
át a függvénynek a `ft_ultimate_ft(ptr9)` hívással, ezért a `number` változó
értéke módosul 42-re.

4. `int main()`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

5. `int number = 20;`: Ebben a sorban definiáljuk az `int` típusú `number`
változót és inicializáljuk 20 értékkel.

6. `int *ptr1 = &number;`: Ebben a sorban létrehozunk egy mutatót (`ptr1`),
amely a `number` változóra mutat.

7. `int **ptr2 = &ptr1;`: Ebben a sorban létrehozunk egy mutatót (`ptr2`), amely
a `ptr1` mutatóra mutat.

8. `int ***ptr3 = &ptr2;`: Hasonlóan a `ptr2` mutatóhoz itt létrehozunk egy
mutatót (`ptr3`), amely a `ptr2` mutatóra mutat.

9. `int ****ptr4 = &ptr3;`: Ugyanezen elven itt létrehozunk egy `ptr4` mutatót,
amely a `ptr3` mutatóra mutat.

10. `int *****ptr5 = &ptr4;`: Egyre mélyebbre menve itt létrehozunk egy `ptr5`
mutatót, amely a `ptr4` mutatóra mutat.

11. `int ******ptr6 = &ptr5;`: Ugyanezen elven itt létrehozunk egy `ptr6`
mutatót, amely a `ptr5` mutatóra mutat.

12. `int *******ptr7 = &ptr6;`: Hasonlóan a fentiekhez itt létrehozunk egy
`ptr7` mutatót, amely a `ptr6` mutatóra mutat.

13. `int ********ptr8 = &ptr7;`: Itt létrehozunk egy `ptr8` mutatót, amely a
`ptr7` mutatóra mutat.

14. `int *********ptr9 = &ptr8;`: Végül létrehozunk egy `ptr9` mutatót, amely a
`ptr8` mutatóra mutat.

15. `ft_ultimate_ft(ptr9);`: Ebben a sorban hívjuk meg a `ft_ultimate_ft`
függvényt, és átadjuk neki a `ptr9` mutatót. Ennek eredményeként a `number`
változó értéke módosul 42-re.

16. `printf("%d/n", number);`: Ebben a sorban a `printf` függvényt használjuk a
`number` értékének kinyomtatására a képernyőre. Most az érték már 42, mivel a
függvény megváltoztatta azt.

17. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program bemutatja, hogyan módosíthatjuk egy változó értékét egy
függvény segítségével nagyon mélyen ágyazott mutatók használatával. A `number`
változó értéke végül 42 lesz. Azonban egy ilyen mélyen ágyazott mutatólánc
használata a gyakorlatban ritka és nehezen olvasható kódot eredményezhet.*/