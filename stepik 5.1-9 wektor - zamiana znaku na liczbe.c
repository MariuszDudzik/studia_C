#include <stdio.h>
#include <stdlib.h>

int main(){

int tab[10]={0,0,0,0,0,0,0,0,0,0};
char c;
int liczba;

while( (c=getchar()) != EOF && c != '\n'){
    if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5' || c == '6' || c == '7' || c == '8' || c == '9'){

    liczba = c - '0';
    tab[liczba]= tab[liczba] +1;
    }
    else{}
}

for (int i = 0; i<10; i++)
    printf("%d ", tab[i]);

    return 0;
}
