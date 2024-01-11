#include <stdio.h>
#include <stdlib.h>

char* getString(int n) {
    char* string = (char*)malloc((n + 1) * sizeof(char));
    if (string == NULL) {
        printf("B£¥D");
        exit(EXIT_FAILURE);
    }

    fflush(stdout);

    for (int i = 0; i < n; i++) {
        string[i] = getchar();
    }
    string[n] = '\0';
    return string;
}

void printString(char* string, int n) {
    for (int i = 0; i < n; i++) {
        putchar(string[i]);
    }
    printf("\n");
}

int main() {
    int n;

    scanf("%d", &n);
    getchar();

    char* inputString = getString(n);
    printString(inputString, n);

    free(inputString);

    return 0;
}
