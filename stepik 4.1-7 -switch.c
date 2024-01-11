#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
        switch(a) {
            case 1 :
                printf("Styczeń: 31 dni");
                break;
            case 2 :
                 printf("Luty: 28 dni");
                break;
            case 3 :
                 printf("Marzec: 31 dni");
                break;
            case 4 :
                 printf("Kwiecień: 30 dni");
                break;
            case 5 :
                 printf("Maj: 31 dni");
                break;
            case 6 :
                 printf("Czerwiec: 30 dni");
                break;
            case 7 :
                 printf("Lipiec: 31 dni");
                break;
            case 8 :
                 printf("Sierpień: 31 dni");
                break;
            case 9 :
                 printf("Wrzesień: 30 dni");
                break;
            case 10 :
                 printf("Październik: 31 dni");
                break;
            case 11 :
                 printf("Listopad: 30 dni");
                break;
            case 12 :
                 printf("Grudzień: 31 dni");
                break;
            default :
                   printf("BŁĄD");
                break;}
    return 0;
}
