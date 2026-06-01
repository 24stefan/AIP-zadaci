

# Nizovi

---

##  Brisanje elementa sa k-te pozicije (k-1 indeksiranje)

```
for(int i = k - 1; i < N - 1; i++) {
    A[i] = A[i + 1];
}
N--;
```

* `k-1` jer indeksiranje kreće od 0
* pomeramo sve elemente ulevo
* poslednji element “ostaje višak”, zato se samo smanji `N`

primer:

```
A = {1, 2, 5, 4, 3}
k = 3 → briše se A[2] = 5

rezultat:
{1, 2, 4, 3}
```

---






##  Pronalazak indeksa minimuma i maksimuma

```
int min = 0, max = 0;

for(int i = 1; i < N; i++) {

    if(A[i] < A[min]) {
        min = i;
    }

    if(A[i] > A[max]) {
        max = i;
    }
}
```

- min i max su INDEKSI, ne vrednosti
- kreće se od i = 1 jer se 0 uzima kao početni kandidat

---

##  Pronalazak broja elemenata koji se javljaju tačno jednom

```
int brojac = 0;

for(int i = 0; i < N; i++) {
    int m = 0;

    for(int j = 0; j < N; j++) {
        if(A[i] == A[j]) {
            m++;
        }
    }

    if(m == 1) {
        brojac++;
    }
}
```

* za svaki element se broji koliko puta se pojavljuje

---

##  Rotacija niza ulevo za m mesta

```
for(int i = 0; i < m; i++) {
    pom = A[0];

    for(int j = 0; j < N - 1; j++) {
        A[j] = A[j + 1];
    }

    A[N - 1] = pom;
}
```

* svaka rotacija pomera sve ulevo
* prvi element ide na kraj

---

