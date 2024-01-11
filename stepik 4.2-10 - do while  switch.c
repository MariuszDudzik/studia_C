#include <stdio.h>
#include <ctype.h>
#include <math.h>


int main()
{
    int a;
    double b;
    a = 0;

    do
    {
    printf("Witaj w moim programie\nMozesz wybrac nastepujace opcje:\n1 - opcja wyjscia z programu\n2 - opcja pobrania liczby i wyswietlenia jej potegi\n3 - opcja pobrania liczby i wypisania jej pierwiastka\nWpisz wybrana opcje:\n");
      scanf("%d", &a);

     }


    while (a !=1 && a != 2 && a !=3);



    switch(a)
    {
        case 1:
            break;
        case 2:
          scanf("%lf", &b);
         //   printf("%lf\n", b);
            printf("%lf\n", b*b);
            break;
        case 3:
            scanf("%lf", &b);
          //  printf("%lf\n", b);
            printf("%lf\n", sqrt(b));
            break;
    }

    return 0;
}
