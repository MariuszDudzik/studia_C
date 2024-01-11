#include <stdio.h>
#include <math.h>

void main(){
int tab[100000];
int n, x, poczatek, koniec, srodek, znak;
znak = 0;

scanf("%d %d", &n, &x);
if (n>0 && n<=100000){
    for(int i =0; i<n; ++i){
        tab[i] = i+1;
    }

poczatek = 0;
koniec = n-1;

while(poczatek<=koniec){

// lub moze byc nie trzeba math: srodek = poczatek + (koniec - poczatek) / 2;
srodek = floor((poczatek+koniec)/2);

if(tab[srodek]==x){
znak = 1;
break;
}

if(tab[srodek]<x)
poczatek = srodek + 1;

else
koniec = srodek -1;
}

    
    if (znak==1)
        printf("TAK");
        else
   printf("NIE");
}

else
printf("BLAD");

}