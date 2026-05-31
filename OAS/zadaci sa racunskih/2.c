/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program koji vrši rotaciju vrednosti tri promeljive za k
mesta u levo ili desno u zavisnosti od unetog smera rotacije s. Ukoliko se za
smer rotacije unese vrednost −1, rotacija se vrši u levo, a ako se unese 1
rotacija se vrši u desno. Za bilo koju drugu vrednost ne vršiti rotaciju.
Vrednosti promenljivih, kao i parametre k i s zadaje korisnik. Prikazati
vrednosti promenjivih nakon rotacije
*/

#include <stdio.h>

int main() {
    int a, b, c, s, k, pom = 0;

    scanf("%d %d %d", &a, &b, &c);
    
    printf(" S: & K:"); 
    scanf("%d %d", &s, &k);

    printf( " Pre rotacije a:%d b:%d c:%d ", a, b, c);

    if( s == 1 ){
        for(int i = 0; i < k; i++) {
            // ulevo  < - vidi beleske
            pom = a;
            a = b;
            b = c;
            c = pom;
        }
    } else if( s == -1) {
        for(int i = 0; i < k; i++){
        // udesno < - vidi beleske
        pom = c;
        c = b;
        b = a; 
        a =  pom;
        }
    } else{
        printf("nije doslo do rotacije");
    }

  printf( " Nkn rotacije a:%d b:%d c:%d ", a, b, c);
  return 0;
}