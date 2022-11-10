#include <stdio.h>
#include <stdlib.h>

int main (){

    // Basico 1 - Pedir 2 num int - Fazer +,-,*,/,%
    int num1, num2;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1, &num2);

    //SOMA
    printf("A soma de %d + %d eh: %d\n",num1,num2,(num1+num2));

    //SUBTRACAO
    printf("A subtracao de %d - %d eh: %d\n",num1,num2,(num1-num2));

    //MULT
    printf("A multiplicacao de %d * %d eh: %d\n",num1,num2,(num1*num2));

    // DIVISAO
    float resultado = (float) num1/num2;
    printf("A divisão de %d / %d eh: %.2f\n",num1,num2,resultado);
    
    //MOD
    printf("O mod de %d mod %d eh: %d\n",num1,num2,(num1%num2));




    return 0;
}

