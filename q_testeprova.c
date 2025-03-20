// ponteiros e funções
#include <stdio.h>

int buscarMaiorValor(int *vetor, int *tamanho){
    int maior = vetor[0];

    for (int i = 1; i < tamanho; i++){
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }
    return maior;
}

int main(){
    int tamanho;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];

    for (int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    int maior =buscarMaiorValor(vetor, tamanho);
    printf("O maior valor informado eh %d.", maior);

    return 0;
}