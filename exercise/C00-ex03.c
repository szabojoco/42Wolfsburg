/*
Create a function that displays all digits, on a single line, by ascending
order. Here’s how it should be prototyped: void ft_print_numbers(void);
*/
#include <unistd.h>

void	ft_print_numbers(void) {
  char char1 = '0';
  char char2 = '9';

  while (char1 <= char2) {
    write(1, &char1, 1);
    char1++;
  }
}

int	main(void) {
  ft_print_numbers();
  return (0);
}

/*
Ez a program az arab számokat (0-tól 9-ig) írja ki a képernyőre. Most
részletezem a kódot soronként:

1. `#include <unistd.h>`: Ez a sor az `<unistd.h>` könyvtárat tartalmazza,
amelynek része a `write` függvény. A `write` függvény segítségével tudunk
karaktereket írni a képernyőre vagy egy fájlba.

2. `void ft_print_numbers(void)`: Itt definiáljuk a saját függvényünket,
`ft_print_numbers` néven. Ez a függvény nem vár bemenetet (`void`), és célja az
arab számok (0-tól 9-ig) kiírása.

3. `char char1 = '0';` és `char char2 = '9';`: Ezekben a sorokban két
karakterváltozót definiálunk, `char1` és `char2`, amelyek '0' és '9'
karaktereket tartalmaznak kezdetben.

4. `while (char1 <= char2) {`: Itt kezdődik egy while-ciklus, amely addig fut,
amíg `char1` kisebb vagy egyenlő `char2`-vel.

5. `write(1, &char1, 1);`: Ebben a sorban a `write` függvényt használjuk, hogy
kiírjuk `char1`-et a standard kimenetre (1-es számú fájlleíróra). Ez a sor
felelős az aktuális szám kiírásáért.

6. `char1++;`: Ebben a sorban növeljük az `char1` értékét egyel, így léptetve
tovább az arab számokon.

7. `int main(void)`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

8. `ft_print_numbers();`: Ebben a sorban hívjuk meg a korábban definiált
`ft_print_numbers` függvényt, ami elindítja az arab számok kiírását.

9. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program az arab számokat írja ki 0-tól 9-ig a képernyőre egy
while-ciklus segítségével. Ha például futtatod ezt a programot, akkor ezek a
számok egymás után jelennek meg a képernyőn.
 */