// right area
#include <stdio.h>

int main(){
    double matriz[12][12];
    double s =0.0;
    double m;
    int elementosmatriz = 12;
    int qtdnumeros = 0;
    char operacao;
    scanf(" %c\n", &operacao);

    for (int i = 0; i < elementosmatriz; i++){
        for (int j = 0; j < elementosmatriz; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    // d. principal -> i == j Á DIREITA j > i
    // d.secundaria -> i +j = 11 À DIREITA j > 11 -i
    for (int i = 0; i < elementosmatriz; i++){
        for(int j =0; j <elementosmatriz; j++){

            if (j> i && j > (11 - i)){
                s += matriz[i][j];
                qtdnumeros++;
            }
        }
    }

    if (operacao == 'S'){
        printf("%.1lf\n", s);
    } else{
        m = s/qtdnumeros;
        printf("%.1lf\n", m);
    }
    return 0;
} 