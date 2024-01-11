#include <stdio.h>
#include <stdlib.h>

int * stworz_tablice(int n){

int *tab = (int *)malloc(n*sizeof(int));

    if (tab == NULL){
        printf("BŁĄD");
        exit (1);
    }
    else
        return tab;   
}

int *pobierz_tablice(int n){

int *tab = stworz_tablice(n);

for(int i =0; i<n; ++i)
    scanf("%d", &tab[i]);

return tab;

}

void wypisz_tablice(int n){

    int * tab= pobierz_tablice(n);

    for(int i =0; i<n; ++i)
    printf("%d ", tab[i]);

    free(tab);

}


int main() {
int n;

scanf("%d", &n);

wypisz_tablice(n);

    return 0;
}