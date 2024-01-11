#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

double n, m;
int menu;

printf("Wprowadz dwie liczby:");
scanf("%lf %lf", &n, &m);
putchar('\n');

do{


printf("Oblicz sume: wybierz 1\n");
printf("Oblicz roznice: wybierz 2\n");
printf("Oblicz iloczy: wybierz 3\n");
printf("Oblicz iloraz: wybierz 4\n");
printf("Zakoncz: wybierz 0\n");

scanf("%d", &menu);
putchar('\n');
}
while(menu < 0 || menu > 5);

switch(menu){

case 1:
printf("Suma: %lf\n", n+m);
break;
case 2:
printf("Roznica: %lf\n", n-m);
break;
case 3:
printf("Iloczyn: %lf\n", n*m);
break;
case 4:
if(m != 0){
printf("Iloraz: %lf\n", n / m);
break;
}
else
printf("BLAD dzielenie przez 0");
case 0:
break;

}

return 0;

}