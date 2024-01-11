#include <stdio.h>

void main(){
int tab[100];
int n, min, max;

scanf("%d", &n);
if (n>0 && n<=100){
    for(int i =0; i<n; ++i)
    scanf("%d", &tab[i]);

min = tab[0];
max = tab[0];

for(int i=0; i<n; ++i){
    if (min<=tab[i])
    {}
    else
    min = tab[i];

     if (max>=tab[i])
    {}
    else
    max = tab[i];
}

printf("min == %d\n", min);
printf("max == %d\n", max); 

}

else
printf("BLAD");

}