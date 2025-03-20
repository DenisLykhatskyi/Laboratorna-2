#include <stdio.h>

int main() {
    int n;

    printf("Введіть розмір масиву n: ");
    scanf("%d", &n);

    int X[n], Y[n];

    printf("Введіть %d елементів масиву X:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &X[i]);
    }

    Y[0] = X[0];
    for (int k = 1; k < n; k++) {
        Y[k] = Y[k - 1] + X[k];
    }

    printf("Масив Y (часткові суми):\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", Y[k]);
    }

    return 0;
}
