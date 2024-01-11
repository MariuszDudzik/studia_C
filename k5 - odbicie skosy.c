#include <stdio.h>
#include <stdlib.h>

int main(){

int n, ni, mi, m, menu, temp, tab[100][100];

scanf("%d %d", &n, &m);
if (n>0 && m >0){

    for(int i= 0; i<n; ++i){
        for(int j=0; j<m; ++j)
            scanf("%d", &tab[i][j]);
    }
    putchar('\n');
    do{

    printf("Odbicie od lewego gornego rogu po skosie wprowadz 1\n");
    printf("Odbicie od prawego gornego rogu po skosie wprowadz 2\n");
    printf("Wyjscie z programu wprowadz 0\n");

    scanf("%d", &menu);
    putchar('\n');
    
    }
    while(menu<0 || menu>2);

    

    switch(menu){
        case 0:
        break;
        case 1:
        
        if(n%2==0)
        ni = n;
        else
        ni = n+1;
        if(m%2==0)
        mi = m;
        else
        mi = m+1;

    if(n%2 == 0){
        for(int i =0; i<=ni/2; i++){
            for(int j =0; j<=mi/2; ++j){
                temp = tab[i][j];
                tab[i][j] = tab[n-1-j][m-1-i];
                tab[n-1-j][m-1-i] = temp;
            }
            mi = mi -1;
        }
    }
        else{
            for(int i =0; i<ni/2; i++){
            for(int j =0; j<mi/2; ++j){
                temp = tab[i][j];
                tab[i][j] = tab[n-1-j][m-1-i];
                tab[n-1-j][m-1-i] = temp;
            }

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

            if(n%2==0)
            ni = n/2;
            else
            ni = n-1;
            if(m%2==0)
            mi = m/2-1;
            else
            mi = m-1;

            if(n%2 == 0){
            for(int j = m-1; j>=mi; j--){
                for(int i = 0; i<=ni; ++i){
                temp = tab[i][j];
                tab[i][j] = tab[j][i];
                tab[j][i] = temp;
            }
            ni = ni-1;
        }
            }
            else{

                 for(int j = m-1; j>=mi/2; j--){
                for(int i = 0; i<ni; ++i){
                temp = tab[i][j];
                tab[i][j] = tab[j][i];
                tab[j][i] = temp;
                }   
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
