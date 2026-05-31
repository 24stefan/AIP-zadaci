/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program koji određuje i prikazuje zbir elemenata
a) 3. vrste, [x]
b) 2. kolone, [x]
c) na glavnoj dijagonali, [x]
d) na sporednoj dijagonali, [x]
e) iznad glavne dijagonale, [x]
f) ispod sporedne dijagonale. []
kvadratne matrice ANxN, čiji red i elemente zadaje korisnik

*/

#include <stdio.h>

int main(){
   int  i, j, n, sum = 0, a[20][20];

   scanf("%d", &n);

   for(i = 0; i < n; i++){
    for(j = 0; j < n; j++) { 
        scanf("%d", &a[i][j]);
    } }
    
    for(i = 0; i < n; i++) {
        for(j =0 ; j<n; j++) {
            if(i < j) {
                sum += a[i][j];
            }
        }
    }
      printf("suma elemenata iznad glavne dijagonale je : %d", sum);
    return 0;

   }
 