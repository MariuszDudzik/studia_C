#include <stdio.h>
#include <stdlib.h>

char* stworz_tablice(int n)
{
    char * tab = (char*)malloc(n+1);
    if ( tab == NULL)
    { printf("B£¥D");
     return 0; }
     else
         return tab;
}

char* pobierz_tablice(int n)
{
    char * tab = stworz_tablice(n);

    for (int i = 0; i <n; ++i)
     {
       scanf("%c", &tab[i]);
        printf("%c", tab[i]);
       }
    tab[n] = '\0';
    return tab;
}



char * odwroc_napis(char *napis)
{

    int ilosc = 0;
    for (int i =0; napis[i] != '\0'; i++)
        ilosc++;

    char* tab_o =(char*)malloc(ilosc+1);

    int temp = 0;
    for(int i = ilosc -1; i>=0; i--)
    {
        tab_o[temp] = napis[i];
        temp++;
    }
    tab_o[temp] = '\0';
  //  free(napis);
    return tab_o;
}

void wypisz_tablice(char *tab_o, int n)
{
    for (int i=0; i<=n; i++)
        printf("%c", tab_o[i]);
}


int main() {

    int n;
    scanf("%d", &n);

    if (n <=0)
    {
        printf("B£¥D");
        return 0;
    }

    char *napis = pobierz_tablice(n);
    char *od_napis = odwroc_napis(napis) ;

    wypisz_tablice(od_napis, n);
    free(napis);
    free(od_napis);
    return 0;
}

