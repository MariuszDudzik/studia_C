#include <stdio.h>
#include <stdlib.h>

void menu(){
int n;
do{ 

printf("WITAJ W MOIM PROGRAMIE\n");
printf("WPISZ LICZBE Z MENU\n");
printf("1 - wypisanie liczby INT_MAX\n");
printf("0 - wyjscie z programu\n");

scanf("%d", &n);
}
while(n != 0 && n != 1);

if (n == 1)
printf("%d", INT_MAX);
else
{}
}


int main(){

//int a;
//scanf("%d", &a);
menu();

}