/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program koji određuje broj elemenata niza koji se javljaju
samo jednom. Broj elemenata niza i elemente niza zadaje korisnik.

*/

#include <stdio.h>

int main() {
    int A[20], N, pojava1 = 0, m;

    printf("N: \n");
    scanf("%d", &N);

    for(int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // odredjivanje elemenata koji se pojavljuju jednom
 
    for( int i = 0; i < N; i++){
        m = 0;
        for(int j = 0; j < N; j++) {
        
        if(A[i] == A[j]){
            m++;
        }
    }
    if(m == 1)
        pojava1++;
        
    }

    printf("Broj elemenata koji se pojavljuju samo jednom: %d", pojava1);
    
}