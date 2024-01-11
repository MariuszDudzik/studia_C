#include <stdio.h>
#include <stdlib.h>


char* getString(int n){

    char znak;
    char* string = (char*)malloc( n * sizeof(char) + 1);
    if (string == NULL){
        printf("B£¥D");
        return 0;
    }
    else{

        for (int i =0; i<n; i++){
         scanf("%c", &znak);
          string[i] = znak;
        }

        string[n] = '\0';

        return string;
    }

}

void lowerString(char* string){

    int temp;
    char temp2;
    int licznik =0 ;
    for(int i =0; string[i] != '\0'; i++)
        licznik++;

    char* pomocnicza = (char*)malloc(licznik +1);

    for(int i =0; string[i] != '\0'; i++){
        temp = string[i];
            if (temp > 64 && temp < 91){
            temp = temp + 32;
            temp2 = temp;
            pomocnicza[i] = temp2;
            }
            else{
            temp2 = temp;
            pomocnicza[i] = temp2;}
    }

    for(int i =0; i<licznik; i++)
        printf("%c", pomocnicza[i]);

    free(pomocnicza);

}

int main() {

 int n;
    scanf("%d\n", &n);

    char* string = getString(n);
    lowerString(string);

    free(string);
    return 0;

}
