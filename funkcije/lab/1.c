/*
Nacrtati strukturni dijagram toka algoritma i napisati funkciju „int prost(int A)“ na
programskom jeziku C koja određuje da li je broj A prost broj. U glavnom programu ispitati i
prikazati koliko brojeva, od ukupno N brojeva koje zadaje korisnik, je prosto

*/

#include <stdio.h>

int prost( int n) {
    if(n < 2) {
        return 0;
    }
    
    for(int i = 2; i < n; i++) {
        if( n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int n, i, zadovoljavaju = 0, a;
    printf("n: \n");
    scanf("%d", &n);

    for( i = 0; i < n; i++) {
        printf("Unesite %d. broj: \n", i);
        scanf("%d", &a);

        if(prost(a)) {
            zadovoljavaju++;
        }
    }
    printf("Od %d unetih brojeva prosti su: %d ", n, zadovoljavaju);
    return 0;
}