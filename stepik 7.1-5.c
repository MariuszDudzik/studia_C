#include <stdio.h>
#include <stdlib.h>

void wypisz_tabele(int tab[], int n){

for(int i = 0; i<n; ++i){
printf("%d ", tab[i]);

}

}


int main(){

int a;
int tab[100];

scanf("%d", &a);

for(int i=0; i<a; ++i)
    scanf("%d", &tab[i]);

wypisz_tabele(tab, a);

}