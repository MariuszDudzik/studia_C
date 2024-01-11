#include <stdio.h>
#include <string.h>

int main(){

int tab[100][100];
int a,b, akt, indeks;

scanf("%d %d\n", &a, &b);

   for(int i =0; i<a; ++i){
    for(int j =0; j<b; ++j)
        scanf("%d", &tab[i][j]);}


  for(int w=0; w<a; ++w){
    for(int k=0; k<b; ++k){
          akt = tab[w][k];
          indeks = k;
        for(int i=k; i<b; ++i)
            if (tab[w][i] >= akt)
        {}
            else{
            akt = tab[w][i];
            indeks = i;}

     if (tab[w][k] != akt)
      {tab[w][indeks] = tab[w][k];
       tab[w][k] = akt;}
      else{}
     }
        for(int i =0; i<b-1; ++i)
        printf("%d ", tab[w][i]);

        for(int i=b-1; i<b; ++i)
        printf("%d\n", tab[w][i]);

  }

return 0;
}



