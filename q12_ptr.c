// above main diagonal
#include <stdio.h>
 
int main() {
    double matriz[12][12];
    char operacao;
    double m, s = 0.0;
    int qtd;
    
    scanf(" %c", &operacao);
    
    for (int i = 0; i < 12; i++){
        for (int j = 0; j<12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            if (i < j){
                s +=matriz[i][j];
                qtd++;
            }
        }
    }
    if (operacao == 'S'){
        printf("%.1lf\n", s);
    }
    else{
        m = s/qtd;
        printf("%.1lf\n", m);
    }
    return 0;
}