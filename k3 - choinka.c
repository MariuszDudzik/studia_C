#include <stdio.h>
#include <stdlib.h>

int main(){

int n, licznik, wiersz;
licznik =1;


printf("Podaj liczbe: ");
scanf("%d", &n);
putchar('\n');

wiersz = n;

if(n>0){

while(wiersz>0){
    for(int i = 1; i<=n; i++){
        if (i<wiersz)
        printf(" ");
        else{
        printf("%d", licznik);
        licznik++;
            if(i<n)
            printf(" ");
            else
            putchar('\n');
        }

    }
    licznik =1;
    wiersz--;
    
}

}
else
printf("BLAD");

return 0;

}