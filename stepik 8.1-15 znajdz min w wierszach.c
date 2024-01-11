#include <stdio.h>
#include <stdlib.h>

int **stworz_tablice_dwuwymiarowa(int n, int m){

int **tab = (int**)malloc(n* sizeof(int**));
    if(tab == NULL){
        printf("BLAD");
        return 0;
    }
    else{
        for(int i =0; i<n; i++){
            tab[i] = (int*)malloc(m*sizeof(int));
            if (tab[i] == NULL){
            printf("BLAD");
            return 0;
            }
            else
            {}
        }

    return tab;

    }

}

int **pobierz_tablice_dwuwymiarowa(int n, int m){

int **tablica = stworz_tablice_dwuwymiarowa(n, m);

for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            scanf("%d", &tablica[i][j]);
        }
    }

return tablica;

}

int *znajdz(int n, int m){

    int **tablica = pobierz_tablice_dwuwymiarowa(n , m);

    int *min= (int*)malloc(n*sizeof(int));
        if(min ==NULL){
            printf("BLAD");
            return 0;
        }
        else{

            for(int i =0; i<n; i++){
                int temp = tablica[i][0];
                for(int j =1; j<m; j++){
                    if(temp<tablica[i][j])
                    {}
                    else
                    temp = tablica[i][j];
                    }
                min[i] = temp;
            }

 for(int i =0; i<n; i++)
        free(tablica[i]);

            return min;
            }
}



int main(){

int n, m;

scanf("%d %d", &n, &m);
if ( n > 0 && m > 0){

int* tablica = znajdz(n, m);

for(int i = 0; i<n; ++i){
    printf("%d", tablica[i]);
    if(i<n-1)
    printf(" ");
    else{}
}

   
        free(tablica);

}
else
printf("BLAD");
return 0;
}
