// columns in array
#include <stdio.h>
 
int main() {
 
    double matriz[12][12];
    char operacao;
    double s = 0.0;
    double m;
    int coluna, qtdelementos = 0;
    
    scanf("%d", &coluna);
    scanf(" %c", &operacao);
    
    for (int i = 0; i < 12; i++){
        for (int j = 0; j <12; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 12; i++){
        s +=matriz[i][coluna];
        qtdelementos++;
    }
    
    if (operacao == 'S'){
        printf("%.1lf\n", s);
    } else {
        m = s/qtdelementos;
        printf("%.1lf\n", m);
    }
    
    return 0;
}