#include <stdio.h>
#include <stdlib.h>


int linear_find(int tab[], int n, int m){
    int licznik =0;

    for(int i=0; i<n; ++i){
        if(m==tab[i])
        licznik++;
        else
        {}
    }
return licznik;

}


int main(){

int n, m, tab[100];

scanf("%d", &n);
for (int i =0; i<n; ++i)
scanf("%d", &tab[i]);

scanf("%d", &m);

printf("%d", linear_find(tab, n, m));

}