#include <stdio.h>

int main(){

char z;

while(scanf("%c", &z) && z != EOF)
    putchar(z);

return 0;
}
