/*
a) Na programskom jeziku C napisati strukturni program koji rotira vrednosti 4 celobrojne promenljive
 a,b,c i d za m mesta ulevo. Vrednosti promenljivih, kao i parametar m, unosi korisnik. 
 Prikazati sadržaj promenljivih a,b,c i d nakon rotacije

*/

#include <stdio.h>

int main() {
    int a, b, c, d, m, pom = 0;



    printf("Unesi parametar m: \n");
    scanf("%d", &m);

    printf("Unesi vrednosti redom \n a: b: c: d: \n");
    scanf(" %d %d %d %d", &a, &b, &c, &d);

    for(int i = 0; i < m; i++) {
        pom = a;
        a = b;
        b = c;
        c = d;
        d = pom;
    }

    printf("Nakon rotacije a = %d, b = %d, c = %d, d = %d \n ", a, b, c, d);

    return 0; 
}