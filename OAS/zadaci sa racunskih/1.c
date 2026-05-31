/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program koji vrednosti tri promenljive a, b i c rotira za k
mesta u levo. Vrednosti promenljivih i vrednost parametra k zadaje korisnik.
Prikazati vrednosti promenljivih nakon rotacije

*/


#include <stdio.h>

int main() {
    int a, b, c, k, pom = 0;
    
    printf("a,b,c:\n");
    scanf("%d %d %d", &a,&b,&c);
    
    printf("k: \n");
    scanf("%d", &k);

    for(int i = 0; i < k; i++) {
        // rotacija ulevo   < - vidi beleske
        pom = a;
        a = b;
        b = c;
        c = pom;
    }
    printf("Nkn rotacije a:%d b:%d c:%d", a, b, c);
    return 0;
}