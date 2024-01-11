#include <stdio.h>

void main()
{
    int tab[100];
    int a, x, znak;
    znak = 0;

    scanf("%d", &a);
    if (a > 0 && a <= 100)
    {
        for (int i = 0; i < a; ++i)
        {
            scanf("%d", &tab[i]);
        }

        scanf("%d", &x);

        for (int i = 0; i < a; ++i)
        {

            if (x == tab[i])
            {
                znak = 1;
                break;
            }
            else
            {
            }
        }

        if (znak == 1)
            printf("TAK");
        else
            printf("NIE");
    }

    else
        printf("BLAD");
}