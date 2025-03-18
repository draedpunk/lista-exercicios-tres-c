// lowest number and its position
#include <stdio.h>

int main(){
    int n, menornumero, p;
    scanf("%d", &n);
    int x[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &x[i]);
    }

    menornumero = x[0];
    p = 0;
    for(int i = 1; i < n; i++){
        if (x[i]< menornumero){
            menornumero = x[i];
            p = i;
        }
    }
    printf("Menor valor: %d\n", menornumero);
    printf("Posicao: %d\n", p);



    return 0;
}