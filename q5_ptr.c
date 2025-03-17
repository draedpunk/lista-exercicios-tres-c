//Array Change I
#include <stdio.h>

int main(){
    int n[20], ninvertido[20];

    for (int i = 0; i<20; i++){
        scanf("%d", &n[i]);
    }
    for(int i =0; i<20; i++){
        ninvertido[i] = n[20 - i - 1];
    }

    for (int i =0; i<20;i++){
        printf("N[%d] = %d\n", i, ninvertido[i]);
    }
    return 0;
}