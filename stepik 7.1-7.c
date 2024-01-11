#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dlugosc_napisu(char tab[]){

return strlen(tab) +1;

}


int main(){

char tab[100];

scanf("%[^\n]", tab);

printf("%d", dlugosc_napisu(tab));

}