#include <stdio.h>

int main(){

int n;

scanf("%d", &n);

if (n<1)
    printf("BLAD");
else{

 for(int i=1; i<=n; ++i){
    for(int j=1; j<=n; ++j){
        printf("*");
        if (j<=n-1)
            printf(" ");
        else
            printf("\n");

    }

 }

}
return 0;
}
