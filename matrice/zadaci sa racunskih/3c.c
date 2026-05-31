/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati
strukturni program koji u matrici ANxN vrši zamenu mesta elementima
a) k-te i l-te vrste, [x]
b) k-te i l-te kolone, [x]
c) k-te vrste i k-te kolone. []
Dimenziju matrice N, vrednosti elemenata matrice ai,j i parametre
transformacije k i l zadaje korisnik. Prikazati matricu nakon transformacije.

*/

#include <stdio.h>

int main() {
  int i, j, k, n, pom, a[20][20];
  scanf("%d", &n);

  for( i = 0; i < n; i++) {
    for( j = 0; j < n; j++) {
        scanf( "%d", &a[i][j]);
    }
      }

      scanf("%d", &k);
      // zamena mesta elementima

    for( i = 0; i < n; i++) { 
        pom = a[k - 1][i];
        a[k - 1][i] = a[i][k - 1];
        a[i][k - 1] = pom;
    }

    for( i = 0; i < n; i++) {
       for(j = 0; j < n; j++) {
        printf("%d ", a[i][j]);
       }
       printf("\n");
    }
}