/*
Pronalazenje indexa gde pocinje podniz B velicine m <= n u nizu A
*/



#include <stdio.h>

#define dim 1000

int main() {

    int poz, m, n, A[dim], B[dim], pom[dim], l, k;

    printf("n: \n" );
    scanf("%d", &n);

    printf("m: \n" );
    scanf("%d", &m);

    

    for( int i = 0; i < n; i++) {
        scanf("%d", &A[i]);
    } 

     for( int i = 0; i < m; i++) {
        scanf("%d", &B[i]);
    }

    poz = 0;
    l = 0;

    // glavni deo

    while( l <= n-m) {
        k = 0;
        while(k < m && A[l+k] == B[k])
        k++;
        if(k == m) {
          pom[poz] = l;
          poz++; }

        l++;
        
    }
    
    printf("Pozicije podniza : ");
    for(int i = 0; i < poz; i++)
       printf(" %d", pom[i]);


}