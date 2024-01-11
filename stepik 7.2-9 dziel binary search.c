#include <stdio.h>
#include <stdlib.h>

int binary_search(double tab[], int poczatek, int koniec, double x){
   if (poczatek <= koniec){
        int mid = poczatek + (koniec-poczatek)/2;
        if(tab[mid]==x)
        return 1;
        else{
            if (tab[mid]> x)
            return binary_search(tab, poczatek, mid-1, x);
            else
            return binary_search(tab, mid+1, koniec, x);
        }

   }
else
return 0;

}

int main() {
    
int n;
double tab[100], x;

    scanf("%d", &n);

 for(int i =0 ; i<n; ++i)
 scanf("%lf", &tab[i]);

 scanf("%lf", &x);

 printf("%d", binary_search(tab, 0, n-1, x));    
    
}