#include <stdio.h>

int main() {
    
int tab[100];
int n, znacznik;
znacznik = 1;

scanf("%d", &n);

if (n>0 && n <=100){

for(int i = 0; i<n; ++i)
scanf("%d", &tab[i]);

for(int i =0; i<n-1; ++i){
if (tab[i]>tab[i+1])
{}
else
{znacznik = 0;
break;
}
}

if(znacznik == 1){
printf("Ciag jest posortowany malejaco");
}
else
printf("Ciag nie jest posortowany malejaco");


}
else
printf("BLAD");
    return 0;
}