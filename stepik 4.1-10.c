#include <stdio.h>

int main() {
    char a;
    if (scanf("%c", &a) && a == 'a' || a == 'e' ||  a == 'i' || a == 'o' || a == 'u' || a == 'y') {
        printf("Litera '%c' jest samogłoską", a);}
            else
 printf("Litera '%c' nie jest samogłoską", a);

    return 0;

}
