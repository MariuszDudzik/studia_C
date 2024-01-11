#include <stdio.h>
#include <stdlib.h>

char * stworz_tablice(int n){

char *tab = (char *)malloc(n*sizeof(char)+1);

    if (tab == NULL){
        printf("BŁĄD");
        exit (1);
    }
    else
        return tab;   
}

char *pobierz_tablice(int n){

char *tab = stworz_tablice(n);

for(int i =0; i<=n; ++i)
    scanf("%c", &tab[i]);

return tab;

}

void wypisz_tablice(char *tab, int n){


    for(int i =0; i<=n; ++i)
    printf("%c", tab[i]);


}

char * odwroc_napis(char *napis){

int ilosc = 0;
for (int i =0; napis[i] != '\0'; ++i)
    ilosc++;

    char *o_tab = (char*)malloc(ilosc*sizeof(char));
   
    if (o_tab == NULL){
        printf("BŁĄD");
        exit (1);
    }
    else {
     //   o_tab[ilosc+1] = '\0';
    int j = 0;
    for(int i = ilosc-1; i>=0; i--){
        o_tab[j] = napis[i];
        j++;
    }
        return o_tab;   

}
}

int main() {
int n;

scanf("%d", &n);

char *napis = pobierz_tablice(n);
char *o_napis = odwroc_napis(napis);

wypisz_tablice(o_napis, n);

free(napis);
free(o_napis);

    return 0;
}