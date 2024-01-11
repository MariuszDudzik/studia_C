#include <stdio.h>
#include <stdlib.h>

int max(int tab[], int n){
int temp;
temp = tab[0];

for(int i =1; i<n; ++i){
    if(temp > tab[i])
    {}
    else
    temp = tab[i];

}

return temp;

}


int main(){

int a;
int tab[100];

scanf("%d", &a);

for(int i=0; i<a; ++i)
    scanf("%d", &tab[i]);

printf("%d", max(tab, a));

}