/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program koji određuje i prikazuje zbir elemenata
a) 3. vrste, [x]
b) 2. kolone, [x]
c) na glavnoj dijagonali, [x]
d) na sporednoj dijagonali, [x]
e) iznad glavne dijagonale, []
f) ispod sporedne dijagonale. []
kvadratne matrice ANxN, čiji red i elemente zadaje korisnik

*/

#include <stdio.h>

int main() {
    int i, j, n, sum, a[20][20];
    scanf("%d", &n);


    for (i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    sum = 0; 

    for(i = 0; i < n; i++) {
        for(j =0; j<n ; j++) {
            if(i + j == n - 1)
              sum += a[i][j];
        }
    }
    
    printf("Suma na sporednoj dijagonali je: %d", sum);

    return 0;
}