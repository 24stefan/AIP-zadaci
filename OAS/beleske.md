# Osnovne algorimtamske strukture i tipovi podataka

- Rotiranje elemenata ulevo:
```
pom = a;
a = b;
b = c;
c = pom;
```
- Rotiranje elemenata udesno:
```
pom = c;
c = b;
b = a;
a = pom;

```
- suma prvih N brojeva:
```
s = 0;
for( i = 1; i <= N; i++) {
    s = s + i;
}

```
- proizvod prvih N parnih brojeva brojeva
```
p = 1; 

for(int i = 2; i <= 2*N; i = i + 2) {
     p = p*i;
}

```