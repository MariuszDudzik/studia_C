#include <stdio.h>
#include <math.h>

int main(){

int tab[100000];
int n, x, srodek, poczatek, koniec, znacznik;
znacznik = 0;

    scanf("%d", &n);

    if (n>0 && n <=100000){

    scanf("%d", &x);

     for (int i=0; i<n; ++i)
            tab[i] = i +1;

    poczatek = 1;
    koniec = x;

   while(poczatek<=koniec){

    srodek = floor((poczatek + koniec)/2);

    if (tab[srodek]<x)
        poczatek = srodek + 1;
    else{
       if (tab[srodek] >x)
        koniec = srodek -1;
        else
        {znacznik = 1;
         break;}

        }
   }
       if (znacznik==0)
           printf("NIE");
       else
           printf("TAK");

    }
    else
        printf("B£¥D");

return 0;
}


