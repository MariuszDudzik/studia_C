#include <stdio.h>
#include <stdlib.h>

int main(){
char tab[100], tab_rev[100];
int indeks, temp2;
char c;
indeks = 0;

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
    printf("%c", tab_rev[i]);


    return 0;
}
