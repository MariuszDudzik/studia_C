#include <stdio.h>
#include <stdlib.h>

int main() {
int n;

scanf("%d", &n);

int *tab = (int *)malloc(n*sizeof(int));

if (tab == NULL){
    printf("BŁĄD");
    exit (1);}

for(int i =0; i<n; ++i)
    tab[i] = i+1;

    for(int i =0; i<n; ++i)
    printf("%d ", tab[i]);

    free(tab);

    return 0;
}