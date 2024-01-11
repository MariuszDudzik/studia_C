#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){

char tab[100][100];
char znak;
int w,k,s, omaks, odczyt, koniec, maks;

w=0;
k=0;
s=0;
maks=0;
koniec=1;
omaks = 1;
odczyt = 1;


    for(int i = 0; i<koniec; ++i){

    if(scanf("%c", &znak) == EOF || znak == '\n'){
        tab[w][k] = '\0';
        break;}
        else{
            if(znak == ' '){
                if (s == 1)
                {++koniec;}
                else{
                s = 1;
                tab[w][k] = '\0';
               ++w;
                k =0;
                ++koniec;}}
             else{
                 tab[w][k] = znak;
                 ++k;
                 s = 0;
                 ++koniec;}
             }
        if (w>=101)
            break;
        else{}

        }

   for( int i =1; i<=w; ++i){
        for( int j=0; j<100; ++j){
            if (tab[maks][j] != '\n' && tab[i][j] != '\n'){
                    omaks = toupper(tab[maks][j]);
                    odczyt = toupper(tab[i][j]);
                        if (omaks > odczyt)
                        {break;}
                        else
                        {if (omaks < odczyt)
                            {maks = i;
                            j = 100;}
                            else{}
                        }}
             else{}
        }}
    for(int j =0; j<100; ++j)
        printf("%c", tab[maks][j]);


    return 0;
}
