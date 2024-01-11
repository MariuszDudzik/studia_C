#include <stdio.h>
#include <stdlib.h>


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

void compareStrings(char* string, char* string2){
    
int licznik, licznikS, licznikS2;
int temp, temp2;   
int znacznik = 0;
    
    for(int i =0; string[i] != '\0'; ++i)
        licznikS++;

    for(int i =0; string2[i] != '\0'; ++i)
        licznikS2++;

    if(licznikS != licznikS2){
        if(licznikS>licznikS2)
        licznik = licznikS;
        else
        licznik = licznikS2;
    }


    for(int i=0; i<licznik; ++i) {
        temp = string[i];
        temp2 = string2[i];
        if (temp > temp2){
            znacznik = 1;
            break;
        }
        else{
            if (temp < temp2){
                znacznik = -1;
                break;
            }
            else
            {}
        }
        }
    
    printf("%d", znacznik);
    
}


int main() {
    
 int n, m;
    scanf("%d\n", &n);
    char* string = getString(n);
    
    scanf("%d\n", &m);
    char* string2 = getString(m);
    
    compareStrings(string, string2);
    
    free(string);
    free(string2);
    
    return 0;
    
}