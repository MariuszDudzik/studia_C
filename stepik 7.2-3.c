#include <stdio.h>

int suma(int tab[], int n){

    if(n==0)
    return 0;
    else
    return tab[n-1] + suma(tab, n-1);
}


int main(){

int n, tab[100];

scanf("%d", &n);

for(int i =0; i<n; ++i)
scanf("%d", &tab[i]);


printf("%d", suma(tab, n));

}

