#include <stdio.h>
#include <stdlib.h>

int main(){

char tab[100];
int kod, temp;

scanf("%[^\n]", tab);
scanf("%d", &kod);

    for(int i =0; tab[i] != '\0'; ++i){
        if (tab[i] != ' ' && tab[i] != '\t' && tab[i] != '\0'){
        temp = tab[i];
            if (temp>64 && temp<91){
                temp = tab[i] + kod;
                    if(temp>90)
                    temp = temp - 26;
                    else
                    {}
            }
            else{
                if(temp>96 && temp<123){
                    temp = tab[i] + kod;
                    if(temp>122)
                    temp = temp - 26;
                    else
                    {}

                }

            }


        printf("%c", temp);    
        }
        else
        printf("%c", tab[i]);

    }

return 0;
}