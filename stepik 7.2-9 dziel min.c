#include <stdio.h>
#include <stdlib.h>

double min(double tab[], int poczatek, int koniec) {
    if (poczatek == koniec)
    return tab[poczatek];
    else
     {
        int mid = poczatek + (koniec - poczatek) / 2;

        double minl = min(tab, poczatek, mid);
        double minp = min(tab, mid + 1, koniec);
        return (minl<minp) ? minl : minp;
    }
        
}

int main() {
    int n;
    double tab[100];

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        scanf("%lf", &tab[i]);

    printf("%lf\n", min(tab, 0, n - 1));

    return 0;
}