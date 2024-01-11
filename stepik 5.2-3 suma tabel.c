#include <stdio.h>

int main(){

int tabA[100][100];
int tabB[100][100];
int a, b, c, d, zakresw, zakresk;

scanf("%d %d", &a, &b);

if((a>0 && a<=100) && (b>0 && b<=100)){
    scanf("%d %d", &c, &d);

    if((c>0 && c<=100) && (d>0 && d<=100)){
        for(int i =0; i<a; i++){
            for(int j=0; j<b; j++)
            scanf("%d", &tabA[i][j]);
    }
        for(int i =0; i<c; i++){
            for(int j=0; j<d; j++)
            scanf("%d", &tabB[i][j]);
    }

if (a>c)
zakresw = a;
else
zakresw =c;
if(b>d)
zakresk = b;
else
zakresk = d;

 for(int i =0; i<zakresw; i++){
            for(int j=0; j<zakresk; j++)
            printf("%d ", tabA[i][j]+tabB[i][j]);
            putchar('\n');
 }

    }
    else
printf("BLAD");
}
else
printf("BLAD");


    return 0;
}