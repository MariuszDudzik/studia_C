#include <stdio.h>

int parzysta(int a){

if(a%2==0)
return 0;
else
return 1;

}


int main(){

int a;
scanf("%d", &a);
printf("%d\n", parzysta(a) );

}