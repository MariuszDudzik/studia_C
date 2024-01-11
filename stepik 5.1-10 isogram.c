#include <stdio.h>
#include <stdlib.h>

int main(){

char tab[100];
char c,znak;
int indeks, znacznik;
indeks = 0;
znacznik = 0;

while ((c = getchar()) != EOF && c != '\n'){
    tab[indeks] = c;
    indeks++;
}

 for (int k = 0; k<indeks-1; ++k){
        znak = tab[k];
    for (int i = k+1; i<indeks; ++i){
        if (znak == tab[i]){
        znacznik = 1;
        break;}
        else
            {}
 }
 }
 if (znacznik == 1)
   printf("Podany ci¹g nie jest isogramem");
 else
     printf("Podany ci¹g jest isogramem");


    return 0;
}
