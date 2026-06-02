/*
2. Zadatak: Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C napisati
strukturni program koji pronalazi sva pojavljivanja podniza BM u nizu AN i prikazuje indekse niza
AN od kojih počinju pojavljivanja. Transformisati niz AN tako da se svi elementi prvog
pojavljivanja podniza BM zamene najmanjim elementom niza AN, dok se na pozicijama poslednjeg
pojavljivanja podniza treba naći najveći element niza BM. Dimenzije i elemente niza unosi korisnik.
Smatrati da se podniz javlja najmanje 2 puta u nizu. Prikazati niz nakon transformacije.
*/


#include <stdio.h>


int main() {
    int A[100], B[100], N, M, POM[100], minA = 0, maxB = 0, podniz = 0, k = 0 ;

    printf("Unesi N i niz A:");
    scanf("%d", &N);
    for(int i = 0; i < N; i++)
       scanf("%d", &A[i]);

       
    printf("Unesi M i niz B:");
    scanf("%d", &M);
    for(int i = 0; i < M; i++)
       scanf("%d", &B[i]);

    // pronalazenje najmanjeg elementa u nizu A

    for(int i = 1; i < N; i++)
       if(A[minA] > A[i])
          minA = i;
    printf("Najmanji element niza A je: %d \n", A[minA]);
    
    // pronalazenje najveceg elementa u nizu B

for(int i = 1; i < M; i++)
       if(B [maxB] < B[i])
          maxB = i;
    printf("Najveci element niza B je: %d \n", B[maxB]);

    // pronalazenje indexa na kojima je Bm podniz niz An

    for( int i = 0; i <= N - M; i++) {
        podniz = 1;

        for( int j = 0; j < M; j++) {
            if(A[i+j] != B[j]) {
                podniz = 0;
            }
        }
        if(podniz) {
            POM[k] = i;
            k++;
        }
    }

    printf("Pre transofrmacije A: ");
     for(int i = 0; i < N; i++)
       printf("%d ", A[i]);

    printf("\n--------------------------\n");
        
    printf("Niz Bm je podniz niza A na indexima: \n");

    for(int i = 0; i < k; i++)
       printf("%d ", POM[i]);
    
    printf("\n--------------------------\n");
    
       // svi elementi prvog pojavljivanja se menjanju najmanjim elementom A niza

    for( int i = POM[0]; i < POM[0]+M; i++)
         A[i] = A[minA];

     // na poslednjem pojavljivanju se menjaju elementi poslednjeg pojavljivanja podniza najvecim elementom B niza

     for(int i = POM[k - 1]; i <POM[k - 1] + M; i++)
        A[i] = B[maxB];


    // transformisani niz

    printf("Nakon transofrmacije A: ");
     for(int i = 0; i < N; i++)
       printf("%d ", A[i]);


 return 0;


}