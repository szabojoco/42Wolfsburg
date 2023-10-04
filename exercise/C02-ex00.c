/*
Reproduce the behavior of the function strcpy (man strcpy).
Here’s how it should be prototyped:
    char *ft_strcpy(char *dest, char *src);
*/
#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *dest, char *src) {
  char *original_dest;
  original_dest = dest;

  while (*src != '\0') {
    *dest = *src;
    dest++;
    src++;
  }
  *dest = '\0';
  return (original_dest);
}

int	main(void) {
  char dest[50];
  char src[] = {"Hello world"};
  ft_strcpy(dest, src);
  printf("%s\n", dest);
  return (0);
}

/*
Ez a program egy példa arra, hogyan másoljunk egy karakterláncot egyik
változóból a másikba egy függvény segítségével. Részletezzük a kódot soronként:

1. `#include <stdio.h>` és `#include <unistd.h>`: Ezek a sorok az `<stdio.h>` és
`<unistd.h>` könyvtárakat tartalmazzák, amelyek részei a `printf` és `write`
függvényeknek. A `printf` függvényt a kimenet kinyomtatására, a `write`
függvényt pedig a karakterek írására a standard kimenetre (képernyőre)
használjuk.

2. `char *ft_strcpy(char *dest, char *src)`: Itt definiáljuk a saját
függvényünket, `ft_strcpy` néven. Ez a függvény két karaktermutatót vár
bemenetként: `dest` és `src`. A függvény másolja a `src` karakterláncot a `dest`
karakterláncba, majd visszaadja a `dest` mutatóját.

3. `char *original_dest; original_dest = dest;`: Ebben a sorokban létrehozunk
egy mutatót, `original_dest` néven, és az `dest` mutatóval inicializáljuk azt.
Ez azért szükséges, hogy a függvény végén visszaadhassuk az eredeti `dest`
mutatót.

4. `while (*src != '\0') { ... }`: Ebben a sorokban egy `while` ciklusban
másoljuk át karakterről karakterre a `src` karakterláncot a `dest`
karakterláncba, amíg el nem érjük a nullterminátort (`'\0'`), ami a karakterlánc
végét jelzi.

5. `*dest = *src; dest++; src++;`: Ebben a sorokban másoljuk a `src` karaktert a
`dest` karakterláncba, majd növeljük mindkét mutatót, hogy a következő
karakterre mutasson.

6. `*dest = '\0';`: Ebben a sorban hozzáadjuk a nullterminátort a `dest`
karakterlánc végéhez, hogy azt egy érvényes null-terminált karakterlánccá
tegyük.

7. `return (original_dest);`: Ebben a sorban visszaadjuk az eredeti `dest`
mutatót, ami most már az átmásolt karakterlánc kezdetét mutatja.

8. `int main(void) { ... }`: Itt kezdődik a program fő része, a `main` függvény.
Ez az a rész, amely végrehajtódik, amikor a program elindul.

9. `char dest[50];`: Ebben a sorban definiáljuk egy karaktertömböt, `dest`
néven, amely 50 karaktert tud tárolni. Ez az a tömb, amibe a másolt karakterlánc
kerül.

10. `char src[] = {"Hello world"};`: Ebben a sorban definiáljuk és
inicializáljuk a `src` karakterláncot, amit a másolás forrásaként használunk.

11. `ft_strcpy(dest, src);`: Ebben a sorban hívjuk meg a `ft_strcpy` függvényt,
és átadjuk neki a `dest` és `src` mutatókat. Ennek eredményeként a `src`
karakterlánc másolata a `dest` karaktertömbben található lesz.

12. `printf("%s\n", dest);`: Ebben a sorban használjuk a `printf` függvényt a
`dest` karakterlánc kinyomtatására a képernyőre.

13. `return (0);`: Ez a függvény végén található utasítás, és azt jelzi, hogy a
program sikeresen lefutott. Az 0 érték visszaadása azt jelenti, hogy nincs hiba,
és a program normálisan befejeződött.

Tehát ez a program bemutatja, hogyan másolhatunk egy karakterláncot egyik
változóból a másikba egy függvény segítségével. A program eredményeként a másolt
karakterlánc ("Hello world") a képernyőre kerül kiírásra.*/