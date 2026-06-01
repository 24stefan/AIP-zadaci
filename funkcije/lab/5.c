/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati funkciju
„delioci“ koja vraća niz sa svim deliocima prirodnog broja prenetog preko parametara funkcije.
U glavnom programu uneti prirodan broj B i korišćenjem formirane funkcije odrediti i
prikazati sve njegove delioce.
*/

#include <stdio.h>

int delioci(int delioci[], int n){
    int brojdel = 0;
    for( int i = 1; i <= n; i++) {
        if(n % i == 0) {
            delioci[brojdel++] = i;
        }
    }

 return brojdel++;
}

int main() {
    int N, x[20], br = 0;

    printf("Unesi broj N: \n");
    scanf("%d", &N);

    br = delioci(x, N);


    printf("Delioci broja %d su:   \n", N);
    for( int i = 0; i < br; i++) {
              printf("%2d ", x[i]);
    }
    return 0;
}