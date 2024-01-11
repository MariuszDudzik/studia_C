#include <stdio.h>

int suma(int tab[], int n){

    if(n==0)
    return tab[n];
    else
    return tab[n] + suma(tab, n-1);
}


int main(){

int n;
char tab[100];

scanf("%d\n", &n);

for(int i =0; i<n; ++i)
scanf("%c", &tab[i]);



suma(tab, n-1));

}