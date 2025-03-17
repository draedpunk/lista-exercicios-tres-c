//Array Replacement I
#include <stdio.h>

int main() {
    int lista[10];
    int num;

    for (int j = 0; j < 10; j++) {
        scanf("%d", &num);
        if (num <= 0) {
            num = 1;
        }
        lista[j] = num;
    }

    for (int j = 0; j < 10; j++) {
        printf("X[%d] = %d\n", j, lista[j]);
    }

    return 0;
}
