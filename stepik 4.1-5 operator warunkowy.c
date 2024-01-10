#include <stdio.h>

int main() {
    double a, b;
        scanf("%lf %lf", &a, &b);
        a > b ? printf("Liczba %.2lf jest wiêksza od %.2lf", a, b) : printf("Liczba %.2lf jest mniejsza od %.2lf", a, b);

    return 0;
}
