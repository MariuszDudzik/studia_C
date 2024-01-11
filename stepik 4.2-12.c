#include <stdio.h>

int main(){
    double a, b, k;
    scanf("%lf %lf %lf", &a, &b, &k);

  while (a<=b)
     {

      printf("%.6lf %.6lf\n", a, a*a*a);
       a = a + k;
   }

    return 0;
}
