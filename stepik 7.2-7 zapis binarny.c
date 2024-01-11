#include <stdio.h>

void dec_to_bin(int n){
 
if (n >= 0){    
    if (n == 0)
    printf("0 ");
    else
    {
    
    if (n == 1)    
        
        
 printf("1 ");
    else

        {
        int bit = n % 2;
    
        dec_to_bin(n / 2);
        
        printf("%d ", bit);
    }
        }
    
}   
 else
     
     printf("BŁĄD");
    
}

int main(){

int n;

scanf("%d", &n);


dec_to_bin(n);

}