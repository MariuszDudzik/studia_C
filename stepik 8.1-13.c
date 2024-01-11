#include <stdio.h>
#include <stdlib.h>

int** stworz_tablice_dwuwymiarowa(int n, int m){

    int** tablica = (int**)malloc(n * sizeof(int*));

      if( tablica == NULL) {
        printf("B£¥D");
        return 0;
      }
      else{
         for(int i=0; i<n; i++){
             tablica[i] = (int*)malloc(m * sizeof(int));
             if(tablica[i] == NULL){
                 printf("B£¥D");
                 return 0;
             }
             else{}
         }
      }
     return tablica;
    }


int** pobierz_tablice_dwuwymiarowa(int n, int m){

    int** tablica = stworz_tablice_dwuwymiarowa(n, m);

    for(int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            scanf("%d", &tablica[i][j]);
        }
    }
    return tablica;
}

int main(){

    int n,m;
    scanf("%d %d", &n, &m);
    if (n<=0 || m <=0){
        printf("B£¥D");
        return 0;
    }
    else {

        int** tablica = pobierz_tablice_dwuwymiarowa(n, m);

         for(int i = 0; i<n; i++){
            for (int j = 0; j<m; j++){
            printf("%d", tablica[i][j]);
                if(j<m-1)
                    printf(" ");
                else{}
        }

             putchar('\n');
    }


        for(int i = 0; i<n; i++)
            free(tablica[i]);

    free(tablica);

    }

    return 0;

}

