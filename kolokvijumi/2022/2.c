/*Ujedno modifikacija elemenata koji su iznad glavne i ispod sporedne dijagonale*/



/*
Ulaz: 
5
10 11 12 13 14        
15 16 17 18 19
20 21 22 23 24 
25 26 27 28 29
30 31 32 33 34  

--------------
10 11 12 13 14
15 16 17 18 [19]
20 21 22 [23] [24] - elementi iznad glavne i ispod sporedne dijagonale u matrici
25 26 27 28 29
30 31 32 33 34 

--------------
izlaz:
Matrica nakon unosa:
 10  11  12  13  14
 15  16  17  18  19
 20  21  22  23  24
 25  26  27  28  29
 30  31  32  33  34

Matrica nakon modifikacije:
 10  11  12  13  14
 15  16  17  18   0
 20  21  22   0  24
 25  26  27  28   0
 30  31  32  33  34
 ---------------------------------
*/



#include <stdio.h>

#define dim 100

int main() {

    int A[dim][dim], n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    printf("Matrica nakon unosa:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", A[i][j]);
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (j > i && i + j > n - 1) {

                int brDel = 0;

                if (A[i][j] > 1) {

                    for (int k = 1; k <= A[i][j]; k++)
                        if (A[i][j] % k == 0)
                            brDel++;

                    if (brDel == 2)
                        A[i][j] = 0;
                }
            }
        }
    }

    printf("\nMatrica nakon modifikacije:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%3d ", A[i][j]);
        printf("\n");
    }

    return 0;
}