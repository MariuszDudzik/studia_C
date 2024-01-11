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

void nonWhiteSpace(char *string){

for(int i = 0; string[i] != '\0'; ++i){
    if(string[i] != ' ' && string[i] != '\t' && string[i] != '\n')
    printf("%c", string[i]);
    else
    {}
}

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
    nonWhiteSpace(string);

    free(string);
    }

}
