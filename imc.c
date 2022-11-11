#include <stdio.h>
#include <stdlib.h>

int main (){
    float peso, altura, IMC;
    printf ("Digite seu peso: \n");
    scanf ("%f",&peso);
    printf ("Digite sua altura: \n");
    scanf ("%f", &altura);
    IMC = peso/(altura * altura);
    printf ("IMC = %f \n", IMC);

    if(IMC < 16) {
        printf("\nPerigo de vida.");
    } else if(IMC >= 16 && IMC < 17) {
            printf("\nMuito abaixo do peso.");
    } else if(IMC >= 17 && IMC < 18.5) {
            printf("\nAbaixo do peso.");
    } else if(IMC >= 18.5 && IMC < 25) {
            printf("\nPeso normal.");
    } else if(IMC >= 25 && IMC < 30) {
            printf("\nAcima do peso.");
    } else if(IMC >= 30 && IMC < 35) {
            printf("\nObesidade grau 1.");
    } else if(IMC >= 35 && IMC < 40) {
            printf("\nObesidade grau 2.");
    } else if(IMC > 40) {
            printf("\nObesidade grau 3.");
    }

return 0;
}