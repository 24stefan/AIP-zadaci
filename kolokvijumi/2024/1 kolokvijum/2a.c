/*
a: Na programskom jeziku C napisati strukturni program koji iz celobrojnog niza A od N elemenata briše
element koji se nalazi na zadatoj poziciji k (briše se element iz niza sa indeksom k-1). Elemente niza i poziciju k unosi
korisnik. Prikazati elemente niza nakon izbacivanja elementa.
Napomena: Elemente niza prikazivati tako da se iza svakog elementa nalazi jedan blanko znak. Smatrati da je k pozitivan
broj manji od N


*/


#include <stdio.h>


int main() {

int A[20], N, k;

printf("Unesi broj elemenata niza A[] (tj. N): \n");
scanf("%d", &N);

printf("Unesi niz A[%d]: \n", N);

for(int i = 0; i < N; i++)
    scanf("%d", &A[i]);

printf("Unesi poziciju k za brisanje zeljenog elementa: \n");
scanf("%d", &k);

// brisanje elementa:

for(int i = k - 1; i < N; i++) {
    A[i] = A[i+1];
}
N--;


for( int i = 0; i < N; i++) {
    // btw 'blanko znak' znaci ovaj razmak posle %d
    printf("%d ", A[i]);
}


 return 0;
}