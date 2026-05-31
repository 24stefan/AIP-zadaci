/*Nacrtati strukturni dijagram toka i napisati program na C-u koji zamenjuje mesta 
elementima k-te vrste i j-te kolone matrice ANxN. 
Prikazati matricu pre i posle transformacije.*/

#include <stdio.h>

int main(){
    int i, j, k, l, a[20][20], n, pom;
    scanf("%d", &n);

    for(i = 0; i < n; i++) { 
        for( j  = 0 ; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    scanf("%d %d", &k, &l);

    for( i  = 0; i < n; i++) {
        pom  = a[k-1][i];
        a[k-1][i] = a[i][l-1];
        a[i][l-1] = pom;

    }
  
    for( i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}