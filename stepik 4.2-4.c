#include <stdio.h>

int main(){

int n, s;
s = 1;

scanf("%d", &n);

if (n<1)
    printf("BLAD");
else{

 for(int i=1; i<=n; ++i){
    s = i*s;
 }
    printf("%d\n", s);

}
return 0;
}
