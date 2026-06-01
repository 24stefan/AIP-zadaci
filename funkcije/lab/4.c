#include <stdio.h>

void min_max(int X[], int n, int *min, int *max)
{
    *min = 0;
    *max = 0;

    for(int i = 1; i < n; i++)
    {
        if(X[i] < X[*min])
            *min = i;

        if(X[i] > X[*max])
            *max = i;
    }
}

int main()
{
    int A[20], m, i, min, max;

    printf("Broj elemenata niza: ");
    scanf("%d", &m);

    for(i = 0; i < m; i++)
    {
        scanf("%d", &A[i]);
    }

    min_max(A, m, &min, &max);

    printf("Najmanji element: A[%d] = %d\n", min, A[min]);
    printf("Najveci element: A[%d] = %d\n", max, A[max]);

    return 0;
}