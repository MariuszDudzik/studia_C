#include <stdio.h>
#include <stdlib.h>

int main(){

 int n, m, w;

    w = 1;

    scanf("%d %d", &n, &m);

    if (n <= 0 || m <=0)
    {
        printf("B£¥D");
        return 0;
    }

    else
    {
    int** tab = (int**)malloc(n* sizeof(int*));

        if (tab == NULL)
        {
            printf("B£¥D");
            return 0;
        }
        else
        {
            for(int i=0; i<n; i++)
            {
                tab[i] = (int*)malloc(m * sizeof(int));
                if (tab[i] == NULL)
                {
                    printf("B£¥D");
                    return 0;
                }
            }

            for(int i=0; i<n; i++){
                for(int j=0; j<m; j++)
                { tab[i][j] = w;
                        w++;
                }
            }

           for(int i=0; i<n; i++){
               for(int j=0; j<m; j++) {
                   printf("%d", tab[i][j]);
                   if (j != m-1)
                       printf(" ");
                   else
                   {}
               }
               putchar('\n');
           }

            for(int i =0; i<n; i++)
                free(tab[i]);

            free(tab);
        }
    }
}
