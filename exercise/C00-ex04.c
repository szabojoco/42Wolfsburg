/*
Create a function that displays ’N’ or ’P’ depending on the integer’s sign
entered as a parameter. If n is negative, display ’N’. If n is positive or null,
display ’P’. Here’s how it should be prototyped: void ft_is_negative(int n);
*/
#include <unistd.h>

void	ft_is_negative(int n) {
  if (n >= 0) {
    write(1, "P", 1);
  } else {
    write(1, "N", 1);
  }
}

int	main(void) {
  ft_is_negative(0);
  return (0);
}

/*
Ez a program egy egyszerű példa arra, hogyan ellenőrizzük egy szám előjelét
(pozitív vagy negatív) és írjuk ki a képernyőre "P" (pozitív) vagy "N" (negatív)
karaktert a bemenettől függően. Most részletezem a kódot soronként:

1. `#include <unistd.h>`: Ez a sor az `<unistd.h>` könyvtárat tartalmazza,
amelynek része a `write` függvény. A `write` függvény segítségével tudunk
karaktereket írni a képernyőre vagy egy fájlba.

2. `void ft_is_negative(int n)`: Itt definiáljuk a saját függvényünket,
`ft_is_negative` néven. Ez a függvény egy egész számot (`int n`) vár
bemenetként, majd ellenőrzi, hogy ez a szám pozitív-e vagy negatív.

3. `if(n >= 0) {`: Ebben a sorban elkezdődik egy `if` állítás, amely ellenőrzi,
hogy a bemenő szám (`n`) nagyobb vagy egyenlő-e nullával.

4. `write(1, "P", 1);`: Ha a feltétel igaz, akkor ebben a sorban a `write`
függvényt használjuk, hogy kiírjuk a "P" karaktert a standard kimenetre (1-es
számú fájlleíróra). Ez azt jelzi, hogy a bemenő szám pozitív.

5. `} else {`: Ebben a sorban kezdődik az `else` ág, amely akkor fut le, ha a
feltétel hamis.

6. `write(1, "N", 1);`: Az `else` ágban a `write` függvényt használjuk, hogy
kiírjuk az "N" karaktert a standard kimenetre. Ez azt jelzi, hogy a bemenő szám
negatív.

7. `int main()`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

8. `ft_is_negative(0);`: Ebben a sorban hívjuk meg a `ft_is_negative` függvényt
a 0 értékkel. Így a program "P" karaktert fog kiírni, mivel a 0 pozitív szám.

9. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program ellenőrzi egy bemenő szám előjelét, és kiírja a képernyőre
"P" vagy "N" karaktert ennek megfelelően.*/