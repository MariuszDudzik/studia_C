#include <stdio.h>

int main() {
    int tab[10];
    int *wsk;
    int *wskbegin = &tab[0];
    int *wskend = &tab[10];

    for (wsk = wskbegin; wsk < wskend; wsk++)
        scanf("%d", wsk);

    for (wsk = wskbegin; wsk < wskend; wsk++)
        printf("%d ", *wsk);

    return 0;
}