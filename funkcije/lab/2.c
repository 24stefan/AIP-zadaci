/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati funkciju za
zamenu mesta vrednostima dve celobrojne promenljive a i b, prenete preko parametara
funkcije. U glavnom programu uneti tri promenljive i korišćenjem formirane funkcije ciklično
ih pomeriti za jednu poziciju u levo. Prikazati brojeve nakon unosa i nakon pomeranja
*/
#include <stdio.h>


void zameni( int *a, int *b) {
    int pom = *a;
     *a = *b;
     *b = pom;

     
}

int main() {
    int a, b, c;

    printf("a: b: c: \n");
    scanf(" %d %d %d", &a, &b, &c);

    zameni(&a, &b);
    zameni(&b, &c);

    printf(" a:%d\n b:%d\n c:%d", a, b, c);

    return 0;
}