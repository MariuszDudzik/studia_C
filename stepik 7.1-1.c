#include <stdio.h>

int ff(int a, int b){
int c;

if(a-b==0){
return 0;
}
else{
    c = (2 *a*b) /(a-b);
return c;
}

}


int main(){

int a,b;
scanf("%d %d", &a, &b);
printf("%d\n", ff(a, b) );

}