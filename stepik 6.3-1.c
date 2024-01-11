#include <stdio.h>

int main() {
    
int tab[100];
int n;

scanf("%d", &n);

if (n>0 && n <=100){

for(int i = 0; i<n; ++i)
scanf("%d", &tab[i]);

for(int i =0; i<n-1; ++i){
if (tab[i]<tab[i+1])
{}
else
printf("%d %d\n", tab[i], tab[i+1]);
}

}
else
printf("BLAD");
    return 0;
}