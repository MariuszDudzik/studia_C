#include <stdio.h>
#include <stdlib.h>

int main(){
char tab[100], tab_rev[100];
int indeks, znacznik, temp2;
char c;
indeks = 0;
znacznik = 1;

 while ((c = getchar()) !=EOF && c !=  '\n'){
     tab[indeks] = c;
     ++indeks;
     if(indeks<99)
        {
        }
        else
            break;
        }

 temp2 =0;

    for(int i=indeks-1; i>=0; i--){
      tab_rev[temp2] = tab[i];
        temp2++;
   }

  for(int i =0; i<indeks; i++)
    if (tab[i]==tab_rev[i])
    {}
    else{
        znacznik = 0;
    break;
    }
    if (znacznik == 0)
        printf("NIE");
    else
        printf("TAK");


    return 0;
}
