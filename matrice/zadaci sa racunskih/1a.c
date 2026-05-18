/*
Nacrtati strukturni dijagram toka algoritma i na programskom jeziku C
napisati strukturni program koji određuje i prikazuje zbir elemenata
a) 3. vrste, [x]
b) 2. kolone, []
c) na glavnoj dijagonali, []
d) na sporednoj dijagonali, []
e) iznad glavne dijagonale, []
f) ispod sporedne dijagonale. []
kvadratne matrice ANxN, čiji red i elemente zadaje korisnik

*/

#include <stdio.h>

void main() {
    int i, j, n, a[20][20], sum;
    scanf("%d", &n);

    for(i = 0; i < n ; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
sum = 0 ;

for(i = 0; i < n; i++)
 for(j = 0; j < n; j++) 
   if( i == 2) 
      sum+=a[i][j];

printf("Suma je %d", sum);
 


}