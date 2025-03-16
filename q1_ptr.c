//simple sort 
#include <stdio.h>

int main(){
    int num1, num2, num3, num1orignal, num2original, num3original, maior;
    scanf("%d %d %d", &num1, &num2, &num3);

    num1orignal = num1;
    num2original = num2;
    num3original = num3;

    if(num2 < num1){
        maior = num1;
        num1 = num2;
        num2 = maior;
    }
    if (num3 < num1){
        maior = num1;
        num1 = num3;
        num3 = maior;
    }
    if (num3 < num2){
        maior = num2;
        num2 = num3;
        num3 = maior;
    }

    printf("%d\n%d\n%d\n\n", num1, num2, num3);
    printf("%d\n%d\n%d\n", num1orignal,num2original, num3original);
    return 0;
}