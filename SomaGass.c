#include <stdio.h>
#include <stdlib.h>

int main (){
    //num int > 1
    int num1, num2=0, i;
 
    printf ("Digite um numero\n");
    scanf ("%d",&num1);
    if (num1 <= 1){
        printf ("somente numeros maiores que um ");
        return 0;
    }
    
    for(i=1;i <= num1;i++){
        num2 += i;
        
    }
    printf ("num2:%d \n",num2);
 
    return 0;
}