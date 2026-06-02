/*
1. Zadatak: Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati strukturni program za određivanje odnosa dve zadate kružnice.
 Kružnica je zadata novim tipom strukture koji je opisan koordinatama (p,q) i poluprečnikom r. 
 Dve unete kružnice mogu da se dodiruju, seku, da nemaju zajedničkih tačaka ili da jedna kružnica obuhvata drugu kružnicu. 
U glavnom programu uneti dve kružnice a zatim prikazati tekstualnu poruku o kakvom su odnosu zadate kružnice.
*/

// r1 + r2 < d -> kruznice nemaju dodirnih tacaka
// r1 + r2 == d -> kruznice se dodiruju
// |r1 - r2| < d -> kruznice se seku 
// ako nista od ovoga nije tacno, obuhvataju se


#include <stdio.h>
#include <math.h>

int main() {
   float  d, r1, r2, p1, p2, q1, q2;

    printf("Prva kruznica p1: q1: r1: \n");
    scanf("%f %f %f", &p1, &q1, &r1);

    printf("Druga kruznica p2: q2: r2: \n");
    scanf("%f %f %f", &p2, &q2, &r2);
 
    d = sqrt(pow(p1 - p2, 2) + pow(q1 - q2, 2));

    if( r1 + r2 < d) {
        printf("Kruznice se ne dodiruju.");
    } else if ( r1 + r2 == d) {
        printf("Kruznice se dodiruju.");
    } else if(fabsf(r1 - r2) < d) {
        printf("seku se");
    } else {
        printf("obuhvataju se");
    }
     
    return 0;
}