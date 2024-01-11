#include <stdio.h>

int main(){

char tab[100][100];
char znak;
int wiersz, spacja;
wiersz = 0;
spacja = 1;


for(int j = 0; j<10000; ++j){
        if(scanf("%c", &znak) != EOF && znak != '\n' ){
           if(znak == ' ' || znak == '\t'){
                if(spacja == 0){
                     wiersz++;
                    j = -1;
                    spacja = 1;
                                }
                    else
                    j = -1 ;
           }
         else
         {
            tab[wiersz][j] = znak;
            spacja = 0;

         }   
    }
    else
    break;
}

for(int i = 0; i<=wiersz; i++){
    for(int j =0; j<100; j++){
        if(tab[i][j] == '\0'){
       printf("%d\n", j);
       j = 100;
   }
   else
   {}
}
}
return 0;
}

