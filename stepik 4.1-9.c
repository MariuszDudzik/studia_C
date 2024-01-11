#include <stdio.h>

int main() {
    int a;
if (scanf("%d", &a) && (a % 15) == 0 )
    printf("\"FizzBuzz\"");
    else{
        if ( (a % 3) == 0)
        printf("\"Fizz\"");
        else{
            if ( (a % 5) == 0)
            printf("\"Buzz\"");
            else
            printf("\"%d\"", a);

        }
    }
    return 0;

    }
