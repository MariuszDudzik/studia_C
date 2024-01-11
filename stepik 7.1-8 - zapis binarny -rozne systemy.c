#include <stdio.h>
#include <stdlib.h>


void dec_to_n(int liczba, int m){

char zapisbinarny[100];
int indeks, reszta, pobrane;
indeks = 0;

if (liczba==0)
printf("0");
else{
while(liczba>0) {
    reszta = liczba%m;
    liczba = liczba/m;

    zapisbinarny[indeks] = reszta;
    indeks++;
}
}
    for(int i = indeks-1; i>=0; i--){
        pobrane = zapisbinarny[i];
            if (pobrane>=10){
    switch(pobrane){

    case 10:
    pobrane = 'A';
    break;
    case 11:
    pobrane = 'B';
    break;
    case 12:
    pobrane = 'C';
    break;
    case 13:
    pobrane = 'D';
    break;
    case 14:
    pobrane = 'E';
    break;
    case 15:
    pobrane = 'F';
    break;
    default :
    pobrane = pobrane;

}
printf("%c", pobrane);
    }
    else
      printf("%d", pobrane);  
    }
}


int main(){

int n, m;

scanf("%d %d", &n, &m);

dec_to_n(n, m);

}