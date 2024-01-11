#include <stdio.h>
#include <stdlib.h>

int main(){
int zapisbinarny[100];
int liczba, indeks, reszta;
indeks = 0;

scanf("%d", &liczba);

if (liczba==0)
printf("0");
else{
while(liczba>0) {
    reszta = liczba%2;
    liczba = liczba/2;
    zapisbinarny[indeks] = reszta;
    indeks++;
}
}
    for(int i = indeks-1; i>=0; i--)
        printf("%d", zapisbinarny[i]);

    return 0;
}
