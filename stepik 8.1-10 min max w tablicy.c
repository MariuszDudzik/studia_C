#include <stdio.h>
#include <stdlib.h>

void min(int *ptab, int n)
{
    int min = ptab[0];
for (int i =1; i <n; i++)
{ if (min < ptab[i])
    {}
    else min = ptab[i];
}
   printf("%d ", min);
}

void max(int *ptab, int n)
{
    int max = ptab[0];
for (int i =1; i <n; i++)
{ if (max > ptab[i])
    {}
    else max = ptab[i];
}
   printf("%d", max);
}


void MinMax(int n)

{
    int* tab = (int*)malloc(n * sizeof(int));

    if (tab == NULL)
    { printf("B£¥D");
    }
    else
    {
        for (int i =0; i<n; i++)
            scanf("%d", &tab[i]);

        min(tab, n);
        max(tab, n);
    }
        free(tab);
    }



int main(){

int n;

    scanf("%d", &n);

    if (n <= 0)
    {
        printf("B£¥D");
    return 0;
    }
    else
        MinMax(n);


    return 0;
}
