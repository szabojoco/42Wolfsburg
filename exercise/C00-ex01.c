/*
Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’. Here’s how it should be
prototyped: void ft_print_alphabet(void);
*/
#include <unistd.h>

void	ft_print_alphabet(void) {
  char char1 = 'a';
  char char2 = 'z';

  while (char1 <= char2) {
    write(1, &char1, 1);
    char1++;
  }
}

int	main(void) {
  ft_print_alphabet();
  return (0);
}

/*
Ez a program egy egyszerű példa arra, hogyan írjuk ki az angol ábécé
karaktereit 'a' karaktertől 'z' karakterig C-ben. Most részletezem a kódot
soronként:

1. `#include <unistd.h>`: Ez a sor az `<unistd.h>` könyvtárat tartalmazza,
amelynek része a `write` függvény. A `write` függvény segítségével tudunk
karaktereket írni a képernyőre vagy egy fájlba.

2. `void ft_print_alphabet(void)`: Itt definiáljuk a saját függvényünket,
`ft_print_alphabet` néven. Ez a függvény nem vár bemenetet (`void`), és célja az
angol ábécé karaktereinek kiírása 'a' karaktertől 'z' karakterig.

3. `char char1 = 'a';` és `char char2 = 'z';`: Ezekben a sorokban két
karakterváltozót definiálunk, `char1` és `char2`, amelyek 'a' és 'z'
karaktereket tartalmaznak kezdetben.

4. `while(char1 <= char2) {`: Itt kezdődik egy while-ciklus, amely addig fut,
amíg `char1` kisebb vagy egyenlő `char2`-vel.

5. `write(1, &char1, 1);`: Ebben a sorban a `write` függvényt használjuk, hogy
kiírjuk `char1`-et a standard kimenetre (1-es számú fájlleíróra). Ez a sor
felelős az aktuális karakter kiírásáért.

6. `char1++;`: Ebben a sorban növeljük az `char1` értékét egyel, így léptetve
tovább az ábécé karakterein.

7. `int main()`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

8. `ft_print_alphabet();`: Ebben a sorban hívjuk meg a korábban definiált
`ft_print_alphabet` függvényt, ami elindítja az ábécé karaktereinek kiírását.

9. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program az angol ábécé karaktereit írja ki 'a' karaktertől 'z'
karakterig a képernyőre egy while-ciklus segítségével. Ha például futtatod ezt a
programot, akkor az összes betű sorban jelenik meg a képernyőn.
*/