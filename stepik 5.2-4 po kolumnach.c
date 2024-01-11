#include <stdio.h>

int main(){

int tab[100][100];
int a, b;

scanf("%d %d", &a, &b);

if((a>0 && a<=100) && (b>0 && b<=100)){
 
        for(int i =0; i<a; i++){
            for(int j=0; j<b; j++)
            scanf("%d", &tab[i][j]);
    }       
        
 for(int j =0; j<b; j++){
            for(int i=0; i<a; i++)
            printf("%d ", tab[i][j]);
            putchar('\n');
 }

}
else
printf("BLAD");


    return 0;
}