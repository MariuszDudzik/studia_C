#include <stdio.h>

int main() {
    
int tab[100][100];
int a, znak;
znak = 1;
    
    
    scanf("%d", &a);
    
    if (a>0 && a<=100){
           for(int i=0; i<a; ++i){
               for(int j=0;j<a; ++j)
                   scanf("%d", &tab[i][j]);
           }
    
            for(int i=0; i<a; ++i){
                for(int j=0; j<a; ++j){
                    if(tab[i][j] == tab[(a-1)-i][(a-1)-j])
                    {}
                    else{
                    znak = 0 ;
                    break;
                    }
                }
                   
            }
          if (znak==0)
          printf("FALSE");
          else
          printf("TRUE");
   
            }
    else
        printf("BŁĄD");
    return 0;
}