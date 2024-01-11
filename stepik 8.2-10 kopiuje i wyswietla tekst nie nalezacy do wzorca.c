#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* getString(int n){
    
    char znak;
    char* string = (char*)malloc( n * sizeof(char) + 1);
    if (string == NULL){
        printf("BŁĄD");
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
        printf("BŁĄD\n");
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



int main() {
    
 int n, m;
    scanf("%d\n", &n);  
    char* string = getString(n);
    
    scanf("%d\n", &m);
    char* string2 = getString(m);
    
    char* pomoc = pomocnicza(string, string2);
    
     printf("%s", pomoc);

    
    free(string);
    free(string2);
    free(pomoc);
    
    return 0;
    
}