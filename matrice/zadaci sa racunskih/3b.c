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

    int i, j, k, l, n, pom, a[10][10];
    
    scanf("%d %d %d", &n, &k, &l);

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
   
    // zamena mesta

    for( i = 0; i < n; i++){
        pom = a[i][k - 1];
        a[i][k - 1] = a[i][l - 1];
        a[i][l - 1] = pom;
    }

    for( i = 0; i < n; i++) { 
        for(j  = 0; j < n; j++) { 
            printf("%d ", a[i][j]);

        }
        printf("\n");
    }
}