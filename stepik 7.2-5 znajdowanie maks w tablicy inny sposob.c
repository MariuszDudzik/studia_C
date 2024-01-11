#include <stdio.h>

int maximum(int tab[], int m, int n) {
    // Warunek zakończenia rekurencji: gdy rozmiar tablicy wynosi 1
    if (m == n)
        return tab[m];

else{
    int middle = (m + n) / 2;

    // Znajdź maksimum w lewej i prawej połowie tablicy
    int maxLeft = maximum(tab, m, middle);
    int maxRight = maximum(tab, middle + 1, n);

    // Zwróć większy z dwóch maksimów
    return (maxLeft > maxRight) ? maxLeft : maxRight;
}
}

int main() {
    int n, tab[100];

    scanf("%d", &n);

    for (int i = 0; i < n; ++i)
        scanf("%d", &tab[i]);

    printf("%d\n", maximum(tab, 0, n - 1));

    return 0;
}