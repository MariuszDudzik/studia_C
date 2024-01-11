#include <stdio.h>
#include <stdlib.h>

int main(){

int licznik = 1;
int n, m;

scanf("%d %d", &n, &m);
    if( n > 0 && m > 0){

        int **tab = (int**)malloc(n*sizeof(int*));
        if (tab == NULL){
            printf("BLAD");
            return 0;
        }
        else{
            for(int i =0; i<n; ++i){
                tab[i] = (int*)malloc(m * sizeof(int));
                if (tab[i] == NULL){
                    printf("BLAD");
                    return 0;
                }
             }
            }

            for(int i = 0; i<n; ++i ){
                for(int j = 0; j<m; ++j){
                tab[i][j] = licznik;
                licznik++;
                }
            }
            for(int i = 0; i<n; ++i ){
                for(int j = 0; j<m; ++j)
                printf("%d ", tab[i][j]);
                putchar('\n');  
            }
             for(int i = 0; i<n; ++i )
                free(tab[i]);

                free(tab);
                 
}       
    else
    printf("BLAD");
    return 0;

}
