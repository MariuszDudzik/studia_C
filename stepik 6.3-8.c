#include <stdio.h>
#include <string.h>

int main(){

char tab[100][100];
char znak;
int w, k;
w = 0;
k =0;

for (int i = 0; i < 100; ++i ) {

               if ( scanf("%c", &znak) == EOF || znak == '\n') {
                    i = 100;
                       }
                else{
                        if (znak == ' ')
                            {tab[w][i] = '\0';
                            ++w;
                            k = -1;}
                        else
                            tab[w][k]= znak;
                            ++k;}

}

        for(int i =0; i<w+1; ++i ){
        putchar('\n');
                                for(int j=0; j<100; ++j)
                                printf("%c", tab[i][j]);}



return 0;
}
