#include <stdio.h>
#include <stdlib.h>

int **create_matrix(int n, int m){

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

int **get_matrix(int n, int m){

int **tablica = create_matrix(n, m);

for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
            scanf("%d", &tablica[i][j]);
        }
    }

return tablica;

}


void **print_matrix(int n, int m){

    int temp;

    int **tablica = get_matrix(n , m);

    int *min= (int*)malloc(n*sizeof(int));
        if(min ==NULL){
            printf("BLAD");
            return 0;
        }
        else{

            for(int i =0; i<n; i++){
                temp = tablica[i][0];
                for(int j =1; j<m; j++){
                    if(temp<tablica[i][j])
                    {}
                    else
                    temp = tablica[i][j];
                    }
                min[i] = temp;
            }

                temp = 0;

                for(int i = 0; i<n; ++i){
                    temp = temp + min[i];
                }

                printf("%d", temp);

                for(int i =0; i<n; i++)
                free(tablica[i]);

                free(tablica);
                free(min);

    }
}

int main(){

int n, m;

scanf("%d %d", &n, &m);
if ( n > 0 && m > 0){

print_matrix(n, m);


}
else
printf("BLAD");
return 0;
}