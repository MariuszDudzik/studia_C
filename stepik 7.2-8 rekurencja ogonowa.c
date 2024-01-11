#include <stdio.h>
#include <stdlib.h>

int silnia(int n,int k){
    if(n <= 1)
        return k;
    else
        return silnia(n-1,n*k);
}

int main() {
    
int liczba;

    scanf("%d", &liczba);

    if (liczba < 0) {

    } 
    else {

        int wynik = silnia(liczba, 1);       
        printf("%d", wynik); 
    }
    
    
}