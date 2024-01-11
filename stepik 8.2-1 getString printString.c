#include <stdio.h>
#include <stdlib.h>

char *getString(int n){

char znak;

char *tablica = (char*)malloc(n*sizeof(char)+1);

if(tablica == NULL){
    printf("BLAD");
    return 0;
}
else{
    for(int i =0; i<n; i++){
        scanf("%c", &tablica[i]);
    }
    tablica[n]= '\0';

    return tablica;
    }

}

void printString(char *string, int n){

for(int i = 0; i<n; ++i)
    printf("%c", string[i]);

}


int main(){

int n;

scanf("%d\n", &n);
if (n<=0){
    printf("BLAD");
    return 0;
}
else{
    char *string = getString(n);
    printString(string, n);

    free(string);
    }

}

