/*
 Prilagoditi rešenje pod a tako da program iz celobrojnog niza A od N elemenata briše sve elemente niza čija
je vrednost jednaka unetoj vrednosti K. Elemente niza i vrednost K unosi korisnik. Prikazati elemente niza nakon izbacivanja
elementa. Napomena: Elemente niza prikazivati tako da se iza svakog elementa nalazi jedan blanko znak
*/
#include <stdio.h>


int main() {

int A[20], N, k, novoN=0;

printf("Unesi broj elemenata niza A[] (tj. N): \n");
scanf("%d", &N);

printf("Unesi niz A[%d]: \n", N);

for(int i = 0; i < N; i++)
    scanf("%d", &A[i]);

printf("Unesi  k za brisanje zeljenog elementa: \n");
scanf("%d", &k);

// brisanje elementa:

for(int i = 0; i < N; i++) {
    if(A[i] != k){
      A[novoN] = A[i];
      novoN++;}
}



for( int i = 0; i < novoN; i++) {
    // btw 'blanko znak' znaci ovaj razmak posle %d
    printf("%d ", A[i]);
}


 return 0;
}