#include <stdio.h>
#include <stdlib.h>

double max(double tab[], int poczatek, int koniec) {
    if (poczatek == koniec)
    return tab[poczatek];
    else
     {
        int mid = poczatek + (koniec - poczatek) / 2;

        double maxl = max(tab, poczatek, mid);
        double maxp = max(tab, mid + 1, koniec);
        return (maxl>maxp) ? maxl : maxp;
    }
        
}

int main() {
    int n;
    double tab[100];

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        scanf("%lf", &tab[i]);

    printf("%lf\n", max(tab, 0, n - 1));

    return 0;
}