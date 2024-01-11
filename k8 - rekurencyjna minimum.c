#include <stdio.h>

int minimum(int tab[], int n, int m){
    
    if (m==n)
        return tab[m];
    else{
     int x = tab[m];
     int y = minimum(tab, n, m+1);

        return(x < y) ? x : y; 
    }
        

    }


int main(){

int n, m, tab[100];
m =0;

scanf("%d", &n);

for(int i =0; i<n; ++i)
scanf("%d", &tab[i]);

printf("%d", minimum(tab, n-1, m));

}