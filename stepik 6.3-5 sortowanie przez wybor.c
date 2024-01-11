#include <stdio.h>

int main() {
    
int tab[100];
int n, krok, temp, poczatek, min, max, indeks; 
char c;
poczatek = 0;
indeks = 0;

scanf("%d\n", &n);

if (n>0 && n <=100){

scanf("%c\n", &c);

for(int i = 0; i<n; ++i)
scanf("%d", &tab[i]);

if (c == 'r'){
krok = n;

while(krok-1>0){
    min = tab[poczatek];
for(int i = poczatek+1; i<n; ++i){
if (min<=tab[i])
{}
else
{min = tab[i];
indeks = i;
}
}
if (indeks == 0)
{}
else{
temp = tab[poczatek];
tab[poczatek] = min;
tab[indeks] = temp;
}
poczatek++;
krok--;
indeks = 0;

}
}
else
{
krok = n;
poczatek = 0;
indeks =0; 

while(krok>0){
    max = tab[poczatek];
for(int i = poczatek+1; i<n; ++i){
if (max>=tab[i])
{}
else
{max = tab[i];
indeks = i;
}
}
if (indeks == 0)
{}
else
{
temp = tab[poczatek];
tab[poczatek] = max;
tab[indeks] = temp;
}
poczatek++;
indeks = 0;
krok--;

}
}


for(int i =0; i<n; ++i){
printf("%d ", tab[i]);
}

}
else
printf("BLAD");
    return 0;
}