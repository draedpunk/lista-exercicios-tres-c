// fibonacci array
#include <stdio.h>

int main(){
    int casos, numero;

    scanf("%d", &casos);

    unsigned long long fibonacci[61];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for (int i =2; i <= 60;i++){
        fibonacci[i] = fibonacci[i - 1] +fibonacci[i -2];
    }

    for (int i = 0; i < casos; i++){
        scanf("%d", &numero);
        printf("Fib(%d) = %llu\n", numero, fibonacci[numero]);
    }

    return 0;
}