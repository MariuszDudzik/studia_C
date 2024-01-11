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

void getLength(char* string){

    int licznik =0 ;
    for(int i =0; string[i] != '\0'; i++)
        licznik++;
        printf("%d", licznik);

}

int main() {

 int n;
    scanf("%d\n", &n);

    char* string = getString(n);
    getLength(string);

    free(string);
    return 0;

}

