#include <stdio.h>

int fff(int n){

    if(n==0)
    return 0;
    else
        if (n == 1)
        return 1;
        else
        return fff(n-1) + fff(n-2);
}


int main(){

int n;

scanf("%d", &n);

printf("%d", fff(n));

}

