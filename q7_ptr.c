// Array Fill III
#include <stdio.h>

int main(){
    double x[100];
    double num;
    scanf("%lf", &num);
    
    x[0] = num;
    for (int i =1; i<100; i++){
        num/=2;
        x[i] = num;
    }
    for (int i = 0; i <100; i++){
        printf("N[%d] = %.4lf\n", i, x[i]);
    }
    return 0;
}