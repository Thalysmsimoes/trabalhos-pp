#include <stdio.h>

int main()
{
    int x,y, a=0,b=1,c=0;

    printf(" Quantidade dos Termos da Sequencia de Fibonacci\n");
    scanf("%d", &x);
    for(y=1; y<x; y++)
    {
        if(y%2==1)
        {
            printf("%d, ",c);
            c=a+b;
            a=c;
        }
        else if(y==2)
            printf("%d, ",c);
        else if(y%2==0)
        {
            printf("%d, ",c);
            c=a+b;
            b=c;
        }
    }
    printf("%d, ... ",c);
}