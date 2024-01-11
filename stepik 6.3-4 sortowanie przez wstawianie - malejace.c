#include <stdio.h>

int main() {
    
int tab[100];
int n, temp, pomocnicza;


scanf("%d\n", &n);

if (n>0 && n <=100){

for(int i = 0; i<n; ++i)
scanf("%d", &tab[i]);

for (int i = 1; i<n; i++){
    temp = tab[i];
    int j = i -1;

    while(j >=0 && tab[j]>temp){
        tab[j+1] = tab[j];
        tab[j] = temp;
        j--;
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