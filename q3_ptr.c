//Array fill I
#include <stdio.h>

int main(){
    int n[10];
    int num;
    scanf("%d", &num);
    
    n[0] = num;

    for (int i = 1; i <10; i++){
        num *=2;
        n[i] = num;
    }

    for (int i = 0; i<10; i++){
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}