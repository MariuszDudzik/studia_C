#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

double n, m;
int ni, mi;

printf("Wprowadz dwie liczby:");
scanf("%lf %lf", &n, &m);
putchar('\n');

ni = (int)n;
mi = (int)m;

printf("Suma: %lf\n", n+m);
printf("Roznica: %lf\n", n-m);
printf("Iloczyn: %lf\n", n*m);

if (m != 0)
printf("Iloraz: %lf\n", n / m);
else
{}

if((ni == n) && (mi == m))
    printf("Reszta: %d\n", ni%mi);
else
{}

if (m != 0)
printf("Potega: %lf\n", pow(n, m));
else
printf("1");

if(n>0)
    printf("Pierwiastek z %lf: %lf\n", n, sqrt(n));
else
{}

if(m>0)
    printf("Pierwiastek z %lf: %lf\n",m, sqrt(m));
else
{}

return 0;

}