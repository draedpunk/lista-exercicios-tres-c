//Array Replacement I
#include <stdio.h>

int main(){
    int lista[10];
    int num;

    for (int j = 0; j<10; j++){
        if(num < 0 || num == 0){
            num = 1;
        }
        scanf("%d\n", &lista[num]);
    }

    for (int i = 0; i<10; i++){
        printf("X[%d] = %d\n", i, num);
    }
    return 0;
}