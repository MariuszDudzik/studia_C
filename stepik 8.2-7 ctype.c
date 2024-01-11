#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

char tablica[1000];
char c;
int indeks = 0;
       
    while ((c = getchar()) !=EOF && c != '\n'){
     tablica[indeks] = c;
     ++indeks;}
 

    
    int Alpha = 0;
    int Digit = 0;
    int Lower = 0;
    int Upper = 0;
    int Spaces = 0;
    int Control = 0;
   
   

    for (int i = 0; i<indeks; ++i) {
       char znak = tablica[i];
        
        if (isalpha(znak)){
            ++Alpha;
                if(islower(znak)){
                    ++Lower;
                }
                else{
                    ++Upper;
                    }
        }
            
        else{
            if(isdigit(znak))
                ++Digit;
            else{}
            
            if(isspace(znak))
                 ++Spaces;
            else{}
            
            if(iscntrl(znak))
                 ++Control;
            else{}
                    
                
                }
        
        }
         
printf("Alpha == %d\n", Alpha);
printf("Digit == %d\n", Digit);    
printf("Lower == %d\n", Lower);    
printf("Upper == %d\n", Upper);
printf("Spaces == %d\n", Spaces);
printf("Control == %d\n", Control);    
            
            
}