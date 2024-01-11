#include <stdio.h>
#include <stdlib.h>

int** pobierz_tablice_dwuwymiarowa(int n, int m){

    int** tablica = (int**)malloc(n * sizeof(int*));
        if (tablica == NULL){
            printf("B£¥D");
            return 0;
        }
        else{

            for (int i=0; i<n; i++){
                tablica[i] = (int*)malloc(m * sizeof(int));
                if (tablica[i] == NULL){
            printf("B£¥D");
            return 0;
        }
                else{}
            }
        }


    for(int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            scanf("%d", &tablica[i][j]);
        }
    }
    return tablica;
        }

int* znajdz(int** tablica, int n, int m){

int* min = (int*)malloc(n * sizeof(int));
    if (min == NULL){
        printf("B£¥D");
        return 0;
    }
    else{

        for (int i = 0; i<n; i++){
            int mi = tablica[i][0];
            for(int j =0; j<m; j++){
                if(mi<= tablica[i][j])
                {}
                else{
                    mi = tablica[i][j];
                }
            }
            min[i] = mi;
        }

    }
        return min;
}

int main(){

int n, m;
    scanf("%d %d", &n, &m);

    if (n <=0 || m <=0){
        printf("B£¥D");
        return 0;
    }

    int** tablica = pobierz_tablice_dwuwymiarowa(n, m);
    int* min = znajdz(tablica, n, m);

    for (int i =0; i<n; i++){
        printf("%d", min[i]);
        if (i <n-1)
            printf(" ");
        else
        {}
    }

    for(int i = 0; i<n; i++)
        free(tablica[i]);

    free(tablica);
    free(min);


}


