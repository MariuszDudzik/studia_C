#include <stdio.h>


int main()
{
int a, b;

    scanf("%d.%d", &a, &b);

   if (b >= 1 && b <= 12 && a >= 1 && a <= 31) {
           if (((b == 1||b == 3||b == 5||b == 7||b == 8||b == 10||b == 12) && a <= 31)||((b == 4||b == 6||b == 9||b == 11) && a <= 30)||(b == 2 && a <= 29)) {

                if ((b == 7)||(b == 8)||(b == 6 && a > 20)||(b == 9 && a < 23))
                printf("Lato");
                else {
                    if ((b == 3 && a >= 21)||(b == 4)||(b == 5)||(b == 6 && a <= 20))
                    printf("Wiosna");
                    else{
                        if ((b == 12 && a >= 21)||(b == 1 && a >= 1)||(b == 2 && a >= 1)||(b == 3 && a <= 20))
                        printf("Zima");
                        else{
                            if ((b == 9 && a >= 23) || (b == 10 && a >= 1) || (b == 11 && a >= 1) || (b == 12 && a <= 20))
                            printf("Jesień");
                            else{}
       }
   }
                }

           }
        else{printf("BŁĄD");}

}
        else{ printf("BŁĄD"); }

    return 0;
}
