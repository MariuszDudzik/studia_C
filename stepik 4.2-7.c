#include <stdio.h>
#include <ctype.h>

int main() {
    int a, b;
    a = 0;
    b = 0;

    do{
       //  printf("Podaj liczbe:");
        scanf("%d", &a);
        if (a > 0)
           {

           break; }
        else{
            while (getchar() != '\n');
        }

    }
    while (1);

            for (int i = 0; i <= a; ++i)
               {

                b = b + i;

               }
            printf("%d", b);


           return 0;
           }




