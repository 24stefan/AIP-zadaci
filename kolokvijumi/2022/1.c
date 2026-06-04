#include <stdio.h>

#define dim 1000

int main() {

    int A[dim], P[dim], poz, nadjen, i, j, n, m;

    scanf(" %d %d", &n, &m);

    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < m; i++) {
        scanf("%d", &P[i]);
    }

    poz = -1;
    nadjen = 0;
    i = 0;

    while (i <= n - m && !nadjen) {
        j = 0;
        while (j < m && A[i + j] == P[j])
            j++;

        if (j == m) {
            nadjen = 1;
            poz = i;
        }

        i++;
    }

    // brisanje niza
    for (i = poz; i < n - m; i++) {
        A[i] = A[i + m];
       
    }
    n -= m;

    for (i = 0; i < n; i++)
        printf("%d   ", A[i]);




    return 0;
}