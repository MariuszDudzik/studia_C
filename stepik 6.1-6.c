#include <stdio.h>

void main(){
int tab[100][100];
int a,b, min;

scanf("%d %d", &a, &b);
if ((a>0 && a<=100) && (b>0 && b<=100)){
    for(int i =0; i<a; ++i){
        for(int j= 0; j<b; ++j)
        scanf("%d", &tab[i][j]);
    }

for(int i=0; i<a; ++i){
    min = tab[i][0];
    for(int j=0; j<b; ++j){
        if(min<=tab[i][j])
        {}
        else
        min = tab[i][j];
    }
        printf("%d ", min);
 }
   
}

else
printf("BLAD");

}