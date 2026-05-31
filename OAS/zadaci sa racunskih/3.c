/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program koji određuje i prikazuje sumu prvih N
prirodnih brojeva


*/

#include <Stdio.h>


int main() {
       int suma = 0, N;

       printf("N:\n");
       scanf("%d", &N);

       for(int i = 1; i <= N; i++) {
         suma += i;
       }

        printf("Suma: %d prvih N brojeva", suma);

    return 0;
}