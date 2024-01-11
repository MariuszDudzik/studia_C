#include <stdio.h>
#include <stdlib.h>

int stworz_tablice(int n)
{
   int *tab = (int*)malloc( n * sizeof(int));
    return tab;
}

int pobierz_tablice(int n){

    int *tablica = stworz_tablice(n);

    for (int i =0; i<n; i++)
        scanf("%d", &tablica[i]);

        return tablica;
}

int main(){

 int n, a;
 int *tablica;
    scanf("%d", &n);

    if (n<=0)
        printf("B£¥D");
    else
    {
    tablica = pobierz_tablice(n);

     //  for(int i =0; i<n; i++)
     //   scanf("%d", &tablica[i]);

        for(int i =0; i<n; i++)
           printf("%d ", tablica[i]);





    }

}



