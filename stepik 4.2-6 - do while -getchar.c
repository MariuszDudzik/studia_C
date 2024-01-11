#include <stdio.h>

int main(){

int n, temp;
do{
    scanf("%d", &n);
}
while(n<1);

temp = 1;

for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
                if(j<=temp){
                    printf("*");
                    if (j<=n-1)
                            printf(" ");
                    else
                    printf("\n");
            }
                else
                    {
                    printf(" ");
                    if (j<=n-1)
                            printf(" ");
                    else
                    printf("\n");
            }

        }
    ++temp;
}

temp = n;

for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
                if(j<=temp){
                    printf("*");
                    if (j<=n-1)
                            printf(" ");
                    else
                    printf("\n");
            }
                else
                    {
                    printf(" ");
                    if (j<=n-1)
                            printf(" ");
                    else
                    printf("\n");
            }

        }
    --temp;
}

temp = 0;

for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
                if(j<=temp){
                    printf(" ");
                    if (j<=n-1)
                            printf(" ");
                    else
                    printf("\n");
            }
                else
                    {
                    printf("*");
                    if (j<=n-1)
                            printf(" ");
                    else
                    printf("\n");
            }

        }
    ++temp;
}

temp = n-1;

for(int i=1; i<=n; ++i){
        for(int j=1; j<=n; ++j){
                if(j<=temp){
                    printf(" ");
                    if (j<=n-1)
                            printf(" ");
                    else
                    printf("\n");
            }
                else
                    {
                    printf("*");
                    if (j<=n-1)
                            printf(" ");
                    else
                    printf("\n");
            }

        }
    --temp;
}


return 0;
}
