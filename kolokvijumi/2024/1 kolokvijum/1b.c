/*
Dopuniti rešenje zadatka pod a tako da se nakon rotacije kreira četvorocifreni broj od unetih vrednosti promenljivih. 
 Smatrati da korisnik unosi cifre:
 gde promenljiva d predstavlja cifru jedinica, c desetica, b stotina i a hiljada. Prikazati četvorocifreni broj.
*/

#include <stdio.h>


int main() {
    int a, b, c, d, m, pom = 0, broj = 0;



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

    broj = a*1000 + b*100 + c*10 + d;

    printf("Cetvorocifreni broj je : %d  ", broj);

    return 0; 
}