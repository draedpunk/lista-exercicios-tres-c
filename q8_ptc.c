// Array fill IV
#include <stdio.h>

int main() {
    int par[5], impar[5];  
    int num;               
    int qtd_max_par = 0, qtd_max_impar = 0;  

    for (int i = 0; i < 15; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) { 
            par[qtd_max_par] = num;
            qtd_max_par++;
            if (qtd_max_par == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                qtd_max_par = 0;
            }
        } else { 
            impar[qtd_max_impar] = num;
            qtd_max_impar++;
            if (qtd_max_impar == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                qtd_max_impar = 0;  
            }
        }
    }

    for (int i = 0; i < qtd_max_impar; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for (int i = 0; i < qtd_max_par; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
