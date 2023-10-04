/*
Create a function that displays the alphabet in lowercase, on a single line,
by descending order, starting from the letter ’z’.
Here’s how it should be prototyped:
    void ft_print_reverse_alphabet(void);
*/
#include <unistd.h>

void	ft_print_reverse_alphabet(void) {
  char char1 = 'a';
  char char2 = 'z';

  while (char2 > char1) {
    write(1, &char2, 1);
    char2--;
  }
}

int	main(void) {
  ft_print_reverse_alphabet();
  return (0);
}

/*
Ez a program hasonló a korábbihoz, de itt az angol ábécét fordítva írjuk ki, 'z'
karaktertől 'a' karakterig. Most részletezem a kódot soronként:

1. `#include <unistd.h>`: Ez a sor az `<unistd.h>` könyvtárat tartalmazza,
amelynek része a `write` függvény. A `write` függvény segítségével tudunk
karaktereket írni a képernyőre vagy egy fájlba.

2. `void ft_print_reverse_alphabet(void)`: Itt definiáljuk a saját
függvényünket, `ft_print_reverse_alphabet` néven. Ez a függvény nem vár
bemenetet (`void`), és célja az angol ábécé karaktereinek kiírása fordítva, 'z'
karaktertől 'a' karakterig.

3. `char char1 = 'a';` és `char char2 = 'z';`: Ezekben a sorokban két
karakterváltozót definiálunk, `char1` és `char2`, amelyek 'a' és 'z'
karaktereket tartalmaznak kezdetben.

4. `while (char2 > char1) {`: Itt kezdődik egy while-ciklus, amely addig fut,
amíg `char2` nagyobb `char1`-nél.

5. `write(1, &char2, 1);`: Ebben a sorban a `write` függvényt használjuk, hogy
kiírjuk `char2`-t a standard kimenetre (1-es számú fájlleíróra). Ez a sor
felelős az aktuális karakter kiírásáért.

6. `char2--;`: Ebben a sorban csökkentjük `char2` értékét egyel, így léptetve
visszafele az ábécé karakterein.

7. `int main()`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

8. `ft_print_reverse_alphabet();`: Ebben a sorban hívjuk meg a korábban
definiált `ft_print_reverse_alphabet` függvényt, ami elindítja az ábécé
karaktereinek fordított kiírását.

9. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program az angol ábécé karaktereit írja ki fordítva, 'z' karaktertől
'a' karakterig egy while-ciklus segítségével. Ha például futtatod ezt a
programot, akkor az összes betű fordított sorrendben jelenik meg a képernyőn.
 */