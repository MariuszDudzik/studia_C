#include <stdio.h>
#include <stdlib.h>


int linear_find(int tab[], int n, char c){

int wsk = 1;

    if(c == 'r' || c == 'm'){

        if(c == 'r'){
   
            for(int i=0; i<n-1; ++i){
                if(tab[i]<tab[i+1])
                {}
                else{
                wsk = 0;
                break;
                }
            }
        }
        else{
            for(int i=0; i<n-1; ++i){
                if(tab[i]>tab[i+1])
                {}
                else{
                wsk = 0;
                break;
                }
            }


        }    
    }
else
wsk = -1;

return wsk;
}


int main(){

int n, tab[100];
char ca;

scanf("%d\n", &n);
for (int i =0; i<n; ++i)
scanf("%d\n", &tab[i]);

scanf("%c", &ca);

printf("%d", linear_find(tab, n, ca));

}