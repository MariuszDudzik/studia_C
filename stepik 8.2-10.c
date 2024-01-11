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
        putchar('\n');

        return string;
    }
}

char* pomocnicza(char* string, char* string2) {
    size_t stringLength = strlen(string);
    size_t string2Length = strlen(string2);

    char* pomocnicza = (char*)malloc((stringLength + 1) * sizeof(char));
    if (pomocnicza == NULL) {
        printf("B£¥D\n");
        return NULL;
    }

    size_t Index = 0;
    for (size_t i = 0; i < stringLength; i++) {
        if (strncmp(string + i, string2, string2Length) != 0) {
            pomocnicza[Index++] = string[i];
        }
    }

    pomocnicza[Index] = '\0';
    return pomocnicza;
}
