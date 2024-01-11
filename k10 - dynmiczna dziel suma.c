#include <stdio.h>
#include <stdlib.h>

double suma(double *tab, int poczatek, int koniec)
{
    if (poczatek == koniec)
        return tab[poczatek];
    else
    {
        int mid = poczatek + (koniec - poczatek) / 2;

        double sumal = suma(tab, poczatek, mid);
        double sumap = suma(tab, mid + 1, koniec);
        return sumal + sumap;
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    double *tab = (double*)malloc(n*sizeof(double));

    for (int i = 0; i < n; ++i)
        scanf("%lf", &tab[i]);

    printf("%lf\n", suma(tab, 0, n - 1));

    return 0;
}