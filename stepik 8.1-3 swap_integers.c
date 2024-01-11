#include <stdio.h>

void swap_integers(int *n, int *m){
 
int temp;
temp = *n;
*n = *m;
*m = temp;
    
}

int main(){

int n, m;

scanf("%d %d", &n, &m);
swap_integers(&n, &m);
printf("%d %d", n, m);

}