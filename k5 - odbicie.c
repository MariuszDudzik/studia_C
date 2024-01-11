#include <stdio.h>
#include <stdlib.h>

int main(){

int n, m, menu, temp, tab[100][100];

scanf("%d %d", &n, &m);
if (n>0 && m >0){

    for(int i= 0; i<n; ++i){
        for(int j=0; j<m; ++j)
            scanf("%d", &tab[i][j]);
    }
    putchar('\n');
    do{

    printf("Odbicie w poziomie wprowadz 1\n");
    printf("Odbicie w pionie wprowadz 2\n");
    printf("Wyjscie z programu wprowadz 0\n");

    scanf("%d", &menu);
    putchar('\n');
    
    }
    while(menu<0 || menu>2);

    switch(menu){
        case 0:
        break;
        case 1:
        for(int j =0; j<m; j++){
            for(int i =0; i<n/2; ++i){
                temp = tab[i][j];
                tab[i][j] = tab[n-1-i][j];
                tab[n-1-i][j] = temp;
            }
        }

            for(int i= 0; i<n; ++i){
                for(int j=0; j<m; ++j){
                printf("%d", tab[i][j]);
                    if(j<m-1)
                    printf(" ");
                    else
                    putchar('\n');
                }    
            }
            break;

            case 2:

            for(int i =0; i<n; i++){
                for(int j =0; j<m/2; ++j){
                temp = tab[i][j];
                tab[i][j] = tab[i][m-1-j];
                tab[i][m-1-j] = temp;
            }
        }

            for(int i= 0; i<n; ++i){
                for(int j=0; j<m; ++j){
                printf("%d", tab[i][j]);
                    if(j<m-1)
                    printf(" ");
                    else
                    putchar('\n');
                }    
            }
            break;

    }
}
else
printf("BLAD");

return 0;
}