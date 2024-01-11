#include <stdio.h>

int main() {
    int a, w, k;

    if (scanf("%d", &a) && a > 0) {
     w = a;
     k = a;
        while (w > 0) {
                    if (k > 1) {
                    printf("\* ");
                    k = --k;
                                }

                    else {
                    printf("\*\n");
                    w = --w;
                    k = a;
                    }
                       }

    } else
            printf("B£¥D");

    return 0;
}
