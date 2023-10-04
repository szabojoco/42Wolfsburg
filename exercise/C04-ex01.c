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
  char str[] = {"This is a string"};
  ft_putstr(str);
  return (0);
}

/*
Ez a kód egy másik egyszerű C program, amely egy saját `ft_putstr` függvényt
használ egy karakterlánc kiírására a standard kimenetre (`stdout`). Most
részletesen elmagyarázom a kódot soronként:

1. `#include <unistd.h>`: Ez a sor az `unistd.h` fejlécet illeszti be a
programba. Az `unistd.h` fejléc szükséges az `write` függvény használatához.

2. `void ft_putstr(char *str) {`: Itt kezdődik a `ft_putstr` függvény
definíciója. Ez a függvény nem tér vissza értékkel (`void`), és egy karakter
pointert (`char *str`) kap bemenetként, ami egy karakterláncot fog ábrázolni.

3. `while(*str != '\0') {`: Ez egy while ciklus, amely addig fut, amíg el nem
érjük a karakterlánc végét. A feltétel azt ellenőrzi, hogy az aktuális karakter
nem egy null karakter (`'\0'`). A null karakter jelzi a karakterlánc végét.

4. `write(1, str, 1);`: Ebben a sorban meghívjuk a `write` függvényt, hogy
kiírjuk az aktuális karaktert a standard kimenetre. A `1` az stdout
fájlelemzőjét jelenti, `str` pedig az aktuális karaktercímre mutat, és `1` azt
jelenti, hogy csak egy karaktert írunk ki.

5. `str++;`: Ez a pointer lép egyet előre a karakterláncban, hogy az új
karaktert vizsgáljuk a következő iterációban.

6. `int main(void) {`: Most kezdődik a `main` függvény definíciója, ami a
program belépési pontja. Ez a függvény is egy egész számot fog visszaadni, és
nem kap bemeneti paramétereket (`void`).

7. `char str[] = {"This is a string"};`: Itt deklaráljuk és inicializáljuk a
`str` nevű karaktertömböt egy adott karakterlánccal.

8. `ft_putstr(str);`: Ebben a sorban meghívjuk a `ft_putstr` függvényt a `str`
karakterlánccal, ami eredményként az adott karakterláncot fogja kiírni a
képernyőre.

9. `return (0);`: Végül a `main` függvény visszatérési értéke 0, ami azt jelzi,
hogy a program sikeresen lefutott.

Ennek a programnak a működése egyszerű: beolvassa a karakterláncot, majd
karakterről karakterre kiírja azt a standard kimenetre, amíg el nem éri a
karakterlánc végét.*/