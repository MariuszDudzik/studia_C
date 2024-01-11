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

void lowerString(char *string){

    int licznik =0;
    int temp;

    for(int i = 0; string[i] != '\0'; ++i)
        licznik++;

    int *pomocnicza = (int*)malloc(licznik*sizeof(int));

        for(int i = 0; i<licznik; ++i){
            temp = string[i];
            if (temp >=65 && temp <=90)
                temp = temp + 32;
                else
                {}
            pomocnicza[i] = temp;
        }    

        for(int i =0; i<licznik; ++i)
            printf("%c", pomocnicza[i]);

            free(pomocnicza);
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
    lowerString(string);

    free(string);
    }

}
