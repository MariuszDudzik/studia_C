#include <stdio.h>

int main() {
    
int tab[100][100];
int a, suma;
suma = 0;
    
    
    scanf("%d", &a);
    
    if (a>0 && a<=100){
           for(int i=0; i<a; ++i)
               for(int j=0;j<a; ++j)
                   scanf("%d", &tab[i][j]);
    
            for(int i=0; i<a; ++i){
                for(int j=0; j<a; ++j){
                    printf("%d ", tab[i][j]);
                    suma = suma + tab[i][j];
                }
                    printf(" %d", suma);
                    putchar('\n');
                    suma =0;
            }
            putchar('\n');
            suma = 0;
            for (int j=0; j<a; ++j){
                for(int i =0; i<a; ++i)
                suma = suma + tab[i][j];
                printf("%d ", suma);
                suma = 0;

            }

    }
    else
        printf("BŁĄD");
    return 0;
}