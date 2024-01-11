#include <stdio.h>

void main(){
int tab[100][100];
int a,b, max;

scanf("%d %d", &a, &b);
if ((a>0 && a<=100) && (b>0 && b<=100)){
    for(int i =0; i<a; ++i){
        for(int j= 0; j<b; ++j)
        scanf("%d", &tab[i][j]);
    }

for(int j=0; j<b; ++j){
    max = tab[0][j];
    for(int i=0; i<a; ++i){
        if(max>=tab[i][j])
        {}
        else
        max = tab[i][j];
    }
        printf("%d ", max);
 }
   
}

else
printf("BLAD");

}