/*
Create a function that displays a string of characters on the standard output.
Here’s how it should be prototyped:
    void ft_putstr(char *str);
*/
#include <unistd.h>

void	ft_putstr(char *str) {
  while (*str != '\0') {
    write(1, str, 1);
    str++;
  }
}

int	main(void) {
  char str[] = {"This is my string"};
  ft_putstr(str);
  return (0);
}

/*
 Ez a program egy példa arra, hogyan írjunk ki egy karakterláncot (stringet) a
képernyőre egy függvény segítségével. Részletezzük a kódot soronként:

1. `#include <unistd.h>`: Ez a sor az `<unistd.h>` könyvtárat tartalmazza,
amelynek része a `write` függvény. A `write` függvényt használjuk ahhoz, hogy
karaktereket írjunk a standard kimenetre (képernyőre).

2. `void ft_putstr(char *str)`: Itt definiáljuk a saját függvényünket,
`ft_putstr` néven. Ez a függvény egy karaktermutatót (`char *str`) vár
bemenetként, ami egy karakterláncot jelent.

3. `while(*str != '\0')`: Ebben a sorban egy `while` ciklusban iterálunk végig a
karakterlánc karakterein, amíg el nem érjük a nullterminátort (`'\0'`), ami a
karakterlánc végét jelzi.

4. `write(1, str, 1);`: Ebben a sorban használjuk a `write` függvényt a karakter
kiírására a standard kimenetre. A `1` az stdout (standard kimenet) fájlleírót
jelöli, `str` pedig a karaktermutató, amely az aktuális karakterre mutat. Az
utolsó argumentum, `1`, megadja, hogy csak egy karaktert írjunk ki.

5. `str++;`: Ebben a sorban növeljük a `str` mutatót, hogy a következő
karakterre mutasson.

6. `int main()`: Itt kezdődik a program fő része, a `main` függvény. Ez az a
rész, amely végrehajtódik, amikor a program elindul.

7. `char str[] = {"This is my string"};`: Ebben a sorban definiáljuk és
inicializáljuk a `str` karaktertömböt, amely tartalmazza a kiírandó
karakterláncot.

8. `ft_putstr(str);`: Ebben a sorban hívjuk meg a `ft_putstr` függvényt, és
átadjuk neki a `str` karaktermutatót. A függvény kiírja a karakterláncot a
képernyőre.

9. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program bemutatja, hogyan írjunk ki egy karakterláncot a képernyőre
egy függvény segítségével. Az eredmény az `ft_putstr` függvény hívása után a
képernyőn jelenik meg, és kiírja a "This is my string" karakterláncot.*/