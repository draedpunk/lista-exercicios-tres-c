//fibonacci
#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);

    if (numero < 1 || numero >= 46) {
        return 1;
    }

    int primeirnumero = 0;
    int segundonumero = 1;
    int proximos;

    for (int i = 0; i < numero; i++) {
        if (i == 0) {
            printf("%d", primeirnumero);
        } else if (i == 1) {
            printf(" %d", segundonumero);
        } else {
            proximos = primeirnumero + segundonumero;
            primeirnumero = segundonumero;
            segundonumero = proximos;
            printf(" %d", proximos);
        }
    }
    printf("\n");

    return 0;
}