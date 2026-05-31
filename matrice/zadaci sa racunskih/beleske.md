# Neke beleske sa zadataka sa racunskih vezbi

 - uslov za sumu elementa neke vrste (npr trece vrste) :
 ```
 if( i == 2) 
      sum+=a[i][j];
```

- uslov za sumu elementa glavne dijagonale:

```
if(i == j) {
    sum += a[i][j];
}
```
- uslov za sumu elementa na sporednoj dijagonali:
```
if( i+j == n - 1)
   sum +=a[i][j];

```
- uslov za sumu elemenata iznad glavne dijagonale:
```
if(i < j) 
  sum += a[i][j];

```
- uslov za sumu elemenata ispod glavne dijagonale:
```
if( i > j)
 sum += a[i][j];
 ```

- uslov za sumu elemenata ispod sporedne dijagonale:
 ```
 if(i + j > n - 1) 
  sum += a[i][j];
  ```
  - uslov za sumu elemenata iznad sporedne dijagonale:
```
if(i + l < n - 1)
  sum += a[i][j];
```
----
## Operacije sa matricama

- Kako sabrati matrice Amxn i Bmxn?


```
// neka je m broj vrsta i  neka je n broj kolona matrice
// krajnja matrica nakon sabiranja ce biti C tj. Cmxn = Amxn + Bmxn

int a[10][10], b[10][10], c[10][10], i, j,  n, m;

// unos broja vrsti i broja kolona
.
.
.

// unos elementata matrice A i Unos elemenata matrice B
.
.
.

//Sabiranje
for(i =0; i<m; i++) {
    for(j = 0; j < n ; j++) {
        c[i][j] = a[i][j] + b[i][j];
    }
}




```

- zamena mesta elementima k-te vrste i l-te vrste

```

for (i = 0; i < n ; i++ ) { 
    pom = a[k - 1][i];
    a[k - 1][i] = a[l - 1][i];
    a[k - 1][i] = pom;
}

```

- zamena mesta elementima k-te i l-te kolone:

``` 
for( i = 0; i < n; i++) {
    pom = a[i][k - 1];
    a[i][k-1] = a[i][l-1];
    a[i][l-1] = pom;
}
```
- zamena mesta elementima k-te vrste i k-te kolone:
```
for( i = 0; i < n ; i++ ) {
    pom = a[i][k - 1];
    a[i][k - 1] = a[ k - 1][i];
    a[ k - 1][i] = pom; 
}
 ```