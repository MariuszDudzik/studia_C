#include <stdio.h>
#include <stdlib.h>

int czy_palindrom(char tab[], int n){
int z = 0;
int k;
k = n-1;

for(int i = 0; i<n; ++i){
if (tab[i] == tab[k-i])
{}
else
{z = 1;
break;
}
}
if (z == 1)
return 1;
else
return 0;

}


int main(){

int a;
char znak;
char tab[100];

scanf("%d\n", &a);

for(int i=0; i<a; ++i)
   if (scanf("%c", &znak) == EOF || znak == '\n')
   break;
   else
   tab[i] = znak;

printf("%d", czy_palindrom(tab, a));

}