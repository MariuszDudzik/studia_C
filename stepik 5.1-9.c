#include <stdio.h>

int main(){

int a, b, i, j, kK, pW, kW, pK, wiersz, koniec;
int tab[100][100];
kK = 0;
pW = 0;
kW = 0;
pK = 0;


scanf("%d %d", &a, &b);

    if ((a>0 && a <= 100) && ( b>0 && b <= 100)){

wiersz = a;
koniec = a*b;

        for(i=0; i<a; ++i){
            for(j=0; j<b; ++j)
                scanf("%d", &tab[i][j]); }

        while ( wiersz > 0){

             for(i = pW; i<pW+1; ++i){
                for(j = pK; j<b-kK; ++j){
                   if (koniec > 0){
                    printf("%d ", tab[i][j]);
                    --koniec;}
                    else {
                        break;}
                    }}
        ++pW;



              for(j =(b-1)-kK; j<=(b-1)-kK; ++j){
                for(i= 0+pW; i<a-kW; ++i){
                   if (koniec > 0){
                    printf("%d ", tab[i][j]);
                    --koniec;}
                    else {
                        break;}
                    }}
        ++kK;



              for(i=(a-1)-kW; i<=(a-1)-kW; ++i){
                for(j = (b-1)-kK; j>=pK; --j){
                   if (koniec > 0){
                    printf("%d ", tab[i][j]);
                    --koniec;}
                    else {
                        break;}
                    }}
        ++kW;

              for(j=pK;j<=pK; ++j){
                for(i =(a-1)-kW; i>=pW; --i){
                   if (koniec > 0){
                    printf("%d ", tab[i][j]);
                    --koniec;}
                    else {
                        break;}
                    }}
        ++pK;

            --wiersz;

        }


   }

    else
        printf("B£¥D");

        return 0;
    }
