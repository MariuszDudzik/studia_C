#include <stdio.h>
#include <stdlib.h>

int main(){

int tab[100], n, min, maks, parzysta, n_parzysta, suma;
parzysta = 0;
n_parzysta = 0;

scanf("%d\n", &n);
if(n>0){
    for(int i = 0; i<n; ++i){
        scanf("%d", &tab[i]);
    }
    min = tab[0];
    maks = tab[0];
    if(tab[0]%2 == 0)
        parzysta = 1;
    else
        n_parzysta = 1;

        
    suma = tab[0];

        for(int i =1; i<n; ++i){
            if(min<tab[i])
            {}
            else
            min = tab[i];
            if(maks>tab[i])
            {}
            else
            maks = tab[i];
            if(tab[i]%2 == 0)
            parzysta = 1;
            else
            n_parzysta = 1;

            suma = suma + tab[i];
        }

putchar('\n');
printf("Najwiekszy element: %d\n", maks);
printf("Najmniejszy element: %d\n", min);
printf("Srednia: %lf\n", (double)suma / n);
    if ((parzysta == 1) && (n_parzysta == 1))
    printf("Tablica zawiera elementy parzyste jak i nieparzyste");
    else{
        if ((parzysta == 1) && (n_parzysta == 0))
        printf("Tablica zawiera elementy parzyste");
        else
        printf("Tablica zawiera elementy nieparzyste");

    }
}

else
printf("BLAD");
return 0;

}