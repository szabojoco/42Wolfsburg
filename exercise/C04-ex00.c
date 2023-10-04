/*
Create a function that counts and returns the number of characters in a string.
Here’s how it should be prototyped:
    int ft_strlen(char *str);
*/
#include <stdio.h>

int	ft_strlen(char *str) {
  int count = 0;
  while (*str != '\0') {
    count++;
    str++;
  }
  return (count);
}

int	main(void) {
  char str[] = {"This is my string"};
  int length = ft_strlen(str);
  printf("%d", length);
  return (0);
}

/*
Ez a kód egy egyszerű C program, amely egy saját ft_strlen függvényt használ a
bemeneti karakterlánc hosszának kiszámítására és aztán kiírja ezt a hosszt a
képernyőre. Most részletesen elmagyarázom a kódot soronként:

1. `#include <stdio.h>`: Ez a sor egy előfeldolgozási utasítás, amely beilleszti
a standard input/output fejlécét a programba. Ez szükséges ahhoz, hogy a
`printf` függvényt használhassuk a későbbiekben.

2. `int ft_strlen(char *str) {`: Itt kezdődik a `ft_strlen` függvény
definíciója. Ez a függvény egy egész számot fog visszaadni, és egy karakter
pointerre (`char *str`) van szüksége bemenetként, ami egy karakterláncot fog
ábrázolni.

3. `int count = 0;`: Ez a változó inicializálja a számlálót nullával. Ez a
változó fogja tárolni a karakterlánc hosszát.

4. `while (*str != '\0') {`: Ez egy while ciklus, amely addig fut, amíg el nem
érjük a karakterlánc végét. A feltétel azt ellenőrzi, hogy az aktuális karakter
nem egy null karakter (`'\0'`). A null karakter jelzi a karakterlánc végét.

5. `count++;`: Minden lépésben növeljük a számlálót eggyel.

6. `str++;`: Ez a pointer lép egyet előre a karakterláncban, hogy az új
karaktert vizsgáljuk a következő iterációban.

7. `return (count);`: Amikor elérjük a karakterlánc végét, a függvény visszaadja
a `count` változó értékét, ami a karakterlánc hossza.

8. `int main(void) {`: Most kezdődik a `main` függvény definíciója, ami a
program belépési pontja. Ez a függvény is egy egész számot fog visszaadni, és
nem kap bemeneti paramétereket (`void`).

9. `char str[] = {"This is my string"};`: Itt deklaráljuk és inicializáljuk a
`str` nevű karaktertömböt egy adott karakterlánccal.

10. `int length = ft_strlen(str);`: Ebben a sorban meghívjuk a `ft_strlen`
függvényt a `str` karakterlánccal, és elmentjük az eredményt a `length`
változóban.

11. `printf("%d", length);`: Ebben a sorban kiírjuk a képernyőre a `length`
változó értékét a `%d` formátumspecifikátor segítségével, ami egy egész számot
jelöl.

12. `return (0);`: Végül a `main` függvény visszatérési értéke 0, ami azt jelzi,
hogy a program sikeresen lefutott.

Összességében ez a program egy karakterlánc hosszát számolja ki és írja ki a
képernyőre. Az eredmény 17 lenne a megadott karakterlánc esetében, mivel 17
karakterből áll.*/