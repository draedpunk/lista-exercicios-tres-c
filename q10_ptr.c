// line in array
#include <stdio.h>
 
int main() {
    char operacao;
    double matriz[12][12];
    double s = 0.0;
    double m;
    int qtdelementos = 0, linha;
    
    scanf("%d\n", &linha);
    scanf(" %c", &operacao);
    
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            if(i == linha){
                s += matriz[i][j];
                qtdelementos++;
            }
        }
    }
    if (operacao == 'S'){
        printf("%.1lf\n", s);
    } else {
        m = s / qtdelementos;
        printf("%.1lf\n", m);
    }
    return 0;
}