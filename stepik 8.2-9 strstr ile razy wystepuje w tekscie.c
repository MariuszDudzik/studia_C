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


int main() {
    
 int n, m;
    scanf("%d\n", &n);  
    char* string = getString(n);
    
    scanf("%d\n", &m);
    char* string2 = getString(m);
    
    int count = 0;

    // Wyszukuj wzorzec w tekście
    char* ptr = string;
    while ((ptr = strstr(ptr, string2)) != NULL) {
        count++;
        ptr += strlen(string2);  // Przesunięcie wskaźnika o długość wzorca
    }

    printf("%d", count);

    
    free(string);
    free(string2);
    return 0;
    
}