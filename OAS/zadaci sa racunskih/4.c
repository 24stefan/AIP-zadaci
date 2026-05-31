
/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program koji određuje i prikazuje proizvod prvih N
parnih prirodnih brojeva

*/

#include <stdio.h>

int main() {
  int N, proizvod = 1;
  
  printf("N:\n");
  scanf("%d", &N);

for( int i = 2; i <= 2*N; i+=2) {
    proizvod *= i;
}

printf("Proizvod: %d", proizvod);
    return 0;
} 