/*

Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program za sabiranje matrica
CMxN = AMxN + BMxN.
Dimenzije matrica i vrednosti elemenata matrica A i B zadaje korisink.
Napomena: zbir matrica definisan je kao zbir odgovarajućih elemenata,
t.j. ci,j = ai,j + bi,j, za svako i = {0,1,2,...,M −1} i j = {0,1,2,...,N −1}.
*/

// Napomene int m u ovom zadatku predstavlja vrste a int n kolone, samim time resavamo zadatak:
#include <stdio.h>

int main(){
    int i, j, m, n, a[20][20], b[20][20], c[20][20];

    printf("Unesite broj vrsta pa kolona matrica \n");

    scanf("%d %d", &m, &n);

    printf("Unesite elemente prve matrice: \n");
    for(i = 0; i < m; i++) {
        for( j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }


    printf("Unesite elemente druge matrice: \n");

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }


    // sabiranje matrica a i b

    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // prikaz matrice c

    for(i = 0; i < m; i++) { 
        for(j = 0; j < n; j++) {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
}