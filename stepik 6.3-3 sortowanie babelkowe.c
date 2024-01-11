#include <stdio.h>

int main() {
    
int tab[100];
int n, krok, kolumna, temp;
kolumna = 1;

scanf("%d", &n);

if (n>0 && n <=100){

for(int i = 0; i<n; ++i)
scanf("%d", &tab[i]);

krok = n;

while(krok>0){
for(int i =0; i<n-kolumna; ++i){
if (tab[i]<tab[i+1])
{}
else
{temp = tab[i];
tab[i] = tab[i+1];
tab[i+1] = temp;
}
}
kolumna++;
krok--;
}

for(int i =0; i<n; ++i){
printf("%d ", tab[i]);
}

}
else
printf("BLAD");
    return 0;
}