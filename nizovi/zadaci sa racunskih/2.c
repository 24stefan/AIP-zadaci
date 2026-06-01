/*Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program koji određuje pozicije (indekse) na kojima
se zadata vrednost k javlja u nizu A od N elemenata. Pozicije na kojima
se zadata vrednost javlja upisati u pomoćnini niz B. Prikazati elemente
niza B nakon formiranja.*/

#include <stdio.h>


int main() {

    int N, M = 0, A[20], B[20], k;


    printf("N: k:\n");
    scanf("%d %d", &N, &k);

    for( int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    for(int i = 0; i < N; i++) {
    if(A[i] == k) {
        B[M] = i;
        M++;
    } }
    printf("Element k = %d se javlja na pozicijama:", k);
    for(int i = 0; i < M; i++) {
        printf(" %2d",   B[i]);
    }
    return 0;
}