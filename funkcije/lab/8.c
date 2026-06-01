/*
Zadatak 8.
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati funkciju koja
određuje i vraća sumu vrednosti elemenata ispod sporedne dijagonale celobrojne matrice ANxN,
prosleđene preko parametara funkcije. U glavnom programu uneti dve celobrojne matrice B i C
i prikazati onu čija je suma elemenata ispod sporedne dijagonale veća
*/
#include <stdio.h>

#define dim 100


int suma(int X[dim][dim], int n) {
    int suma = 0;
    for(int i = 0; i < n; i++)
       for(int j = 0; j < n; j++)
         if(i + j > n - 1)
            suma += X[i][j];
    return suma;
}
int main() {
    int i, j, B[100][100], C[100][100], n;
    
    printf("n: \n");
    scanf("%d", &n);

    for( i = 0; i < n; i++)
     for( j = 0; j < n; j++)
         scanf("%d", &B[i][j]);
    
    for( i = 0; i < n; i++)
     for( j = 0; j < n; j++)
         scanf("%d", &C[i][j]);
    
    int suma_B = suma(B, n);
    int suma_C = suma(C, n);

    if(suma_B > suma_C) {
        printf("Suma ispod sporedne dijagonale matrice B je veca od sume ispod Sporedne dijagonale C i iznosi: %d \n", suma_B);
        for( i = 0; i < n; i++) {
            for( j = 0; j < n; j++) {
                printf("%2d ", B[i][j]);
            }
            printf("\n");
        }
    } else if(suma_B > suma_C){
         printf("Suma ispod sporedne dijagonale matrice C je veca od sume ispod Sporedne dijagonale B i iznosi: %d \n", suma_C);
         for( i = 0; i < n; i++) {
            for( j = 0; j < n; j++) {
                printf("%2d ", C[i][j]);
            }
            printf("\n");
        }
    }  else {
        printf("Sume matrica B i C su jednake !!!");
    }  
    
    


    return 0;
}