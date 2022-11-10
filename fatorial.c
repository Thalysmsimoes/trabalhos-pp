#include <stdio.h>
#include <stdlib.h>

int main (){
    int x,soma=1,i;
    printf ("Digite um numero maior que um ");
    scanf ("%d",&x);
    if (x <= 1){
        printf ("somente numeros maiores que um ");
        return 0;
    }
    for(i=1;i<=x;i++){
        soma=soma*i;
        
    }
      
      printf ("fatorial %d! = %d",x,soma);
      return 0;
}
