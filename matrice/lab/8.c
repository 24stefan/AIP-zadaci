/*
Нацртати структурни дијаграм тока и написати структурни програм на C-у који замењује места елементима kk-те врсте и jj-те колоне матрице AN×NAN×N​. Приказати матрицу пре и после трансформације*/

#include <stdio.h>

int main() {

int n, i, j, k, l, pom;

int a[100][100];

scanf("%d %d %d", &n, &k, &l);
// ubacivanje elemenata u matricu

for (i = 0; i < n; i++) {
    for(j =0; j < n; j++) {
        scanf("%d ", a[i][j]);
    }
}

// prikazivanje matrice pre promene
for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
        printf("%d", &a[i][j]);

    } 
    printf("\n");
}

i = 0;
j = 0;


while (i < n && j < n) { 
   
   // preskakanje zajednickih elemenata

    if ( i == k - 1) {
        i++;
    }
    if (j == l - 1) {
        j++;
    }
    // zamenjivanje mesta elementima k-te vrste i l-te kolone
    pom = a[k - 1][j];
    a[k-1][j] = a[i][l - 1];
    a[i][l - 1] = pom;

    if (i < n) i++;
    if(j < n) j++;
}


printf("\n Posle rotiranja mesta \n");

for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
        printf("%d", a[i][j]);
    } 
    printf("\n");
}

return 0; 

}