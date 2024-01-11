#include <stdio.h>
int main() {
  int M;
  int suma = 0;
  int i = 1;
  int n;
  printf("Podaj liczbe M: \n");
  scanf("%d\n", &M);
  while (suma < M) {
     suma=suma+i;
     i=i+1;
  }

  n=i-1;
  printf("Szukane n to: %d", n);
  return 0;
}
