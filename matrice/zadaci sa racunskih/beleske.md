# Neke beleške sa računskih vežbi

## Uslovi za sumiranje elemenata matrice



Primer: suma elemenata treće vrste.

Pošto indeksiranje kreće od 0:

* prva vrsta → `i == 0`
* druga vrsta → `i == 1`
* treća vrsta → `i == 2`

```c
if(i == 2)
    sum += a[i][j];
```

---

### Suma elemenata glavne dijagonale

Glavna dijagonala ide od gornjeg levog ka donjem desnom uglu.

Na glavnoj dijagonali važi:

```c
i == j
```

Primer:

```c
if(i == j)
    sum += a[i][j];
```

Za matricu:

```
1 2 3
4 5 6
7 8 9
```

Glavna dijagonala je:

```
1 5 9
```

---

### Suma elemenata sporedne dijagonale

Sporedna dijagonala ide od gornjeg desnog ka donjem levom uglu.

Uslov:

```c
i + j == n - 1
```

Primer:

```c
if(i + j == n - 1)
    sum += a[i][j];
```

Za matricu 3x3:

```
1 2 3
4 5 6
7 8 9
```

Sporedna dijagonala je:

```
3 5 7
```

---

### Suma elemenata iznad glavne dijagonale

Elementi iznad glavne dijagonale imaju:

```c
i < j
```

Primer:

```c
if(i < j)
    sum += a[i][j];
```

Za matricu:

```
1 2 3
4 5 6
7 8 9
```

uzimaju se:

```
2 3 6
```

---

### Suma elemenata ispod glavne dijagonale

Elementi ispod glavne dijagonale imaju:

```c
i > j
```

Primer:

```c
if(i > j)
    sum += a[i][j];
```

uzimaju se:

```
4 7 8
```

---

### Suma elemenata ispod sporedne dijagonale

Uslov:

```c
i + j > n - 1
```

Primer:

```c
if(i + j > n - 1)
    sum += a[i][j];
```

---

### Suma elemenata iznad sporedne dijagonale

Uslov:

```c
i + j < n - 1
```

Primer:

```c
if(i + j < n - 1)
    sum += a[i][j];
```



---

# Operacije sa matricama

## Sabiranje matrica

Matrice mogu da se saberu samo ako imaju isti broj vrsta i kolona.

Ako su:

```
A(m x n)
B(m x n)
```

onda će rezultat biti:

```
C(m x n)
```

Formula:

```c
c[i][j] = a[i][j] + b[i][j];
```

Kompletan deo za sabiranje:

```c
for(i = 0; i < m; i++) {
    for(j = 0; j < n; j++) {
        c[i][j] = a[i][j] + b[i][j];
    }
}
```

---

## Zamena mesta k-te i l-te vrste

Koristi se pomoćna promenljiva `pom`.

Ide se kroz sve kolone i menjaju se odgovarajući elementi dve vrste.

```c
for(i = 0; i < n; i++) {
    pom = a[k - 1][i];
    a[k - 1][i] = a[l - 1][i];
    a[l - 1][i] = pom;
}
```

### Napomena

Ako korisnik unese:

```
k = 2
l = 4
```

u programu se koriste:

```
k - 1 = 1
l - 1 = 3
```

zbog indeksiranja od nule.

---

## Zamena mesta k-te i l-te kolone

Ovde prolazimo kroz sve vrste.

```c
for(i = 0; i < n; i++) {
    pom = a[i][k - 1];
    a[i][k - 1] = a[i][l - 1];
    a[i][l - 1] = pom;
}
```

Menjaju se samo kolone, vrste ostaju iste.

---

## Zamena mesta k-te vrste i k-te kolone

Ovo je malo drugačije jer se menja vrsta sa kolonom istog rednog broja.

```c
for(i = 0; i < n; i++) {
    pom = a[i][k - 1];
    a[i][k - 1] = a[k - 1][i];
    a[k - 1][i] = pom;
}
```

### Kako radi?

Ako je:

```
k = 2
```

onda menjamo:

* drugu vrstu
* drugu kolonu

element po element.

Praktično:

```
a[0][1] ↔ a[1][0]
a[1][1] ↔ a[1][1]
a[2][1] ↔ a[1][2]
...
```

---

# Korisne stvari (neki drugi zadaci koje sam nasao na netu itd)

### Brojanje elemenata koji zadovoljavaju neki uslov

Umesto sume koristi se brojač.

```c
if(uslov)
    br++;
```

---

### Traženje najvećeg elementa

```c
max = a[0][0];

for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
        if(a[i][j] > max)
            max = a[i][j];
    }
}
```

---

### Traženje najmanjeg elementa

```c
min = a[0][0];

for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
        if(a[i][j] < min)
            min = a[i][j];
    }
}
```

---




