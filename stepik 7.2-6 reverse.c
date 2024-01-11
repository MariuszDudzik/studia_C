#include <stdio.h>

int reverse(char tab[], int n){

    if(n<0)
    return 0;
    else
    printf("%c", tab[n]);
    reverse(tab, n-1);
    
}


int main(){

int n;
char tab[100];

scanf("%d\n", &n);

for(int i =0; i<n; ++i)
scanf("%c", &tab[i]);


reverse(tab, n-1);

}