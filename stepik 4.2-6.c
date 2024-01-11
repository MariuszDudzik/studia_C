#include <stdio.h>

int main(){

int n,s;
s =0;

do{

scanf("%d", &n);

}
while(n<1);

for(int i=1; i<=n; ++i)
    s=i+s;

    printf("%d", s);

return 0;
}
