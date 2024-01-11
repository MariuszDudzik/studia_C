#include <stdio.h>

int main() {
    
int tab[50][50];
int a, i,j, suma;
suma = 0;    
    
    scanf("%d", &a);
    
    if (a>0 && a<=50){
           for(i=0; i<a; ++i)
               for(j=0;j<a; ++j)
                   scanf("%d", &tab[i][j]);
    
            for(i=0; i<a; ++i){
                for(j=0; j<a; ++j)
                    if (i+j==a-1){
                        suma = suma + tab[i][j];}
                    else{}
                }
                   printf("%d", suma);  
        }
 
    
    else
        printf("BŁĄD");
    return 0;
}