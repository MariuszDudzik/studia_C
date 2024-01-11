#include <stdio.h>
#include <ctype.h>

int main(){

char tab[100][100];
char znak;
int wiersz, spacja, a, b, max;
wiersz = 0;
spacja = 1;
max = 0;


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

for(int i = 0; i<wiersz; ++i){
    for(int j =0; j<100; ++j){
        if(tab[max][j] != '\n' && tab[i+1][j] != '\n'){
            a = toupper(tab[max][j]);
            b = toupper(tab[i+1][j]);
                if(a>b)
                    {j=100;}
                    else
                        if (b>a){
                            max = i+1;
                            j= 100;
                        }
                        else
                        {}
        }

    }

}

    for(int j =0; j<100; j++){
       printf("%c", tab[max][j]);      
   }  



return 0;
}

