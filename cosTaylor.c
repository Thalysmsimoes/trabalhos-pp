#include <stdio.h>
#include <math.h>

long fat(int n) {
    if(n < 2)
        return 1;
    else
        return n * fat(n-1);   
    }

int main()
{
    double x, z = 0.0;
    int n, i, j;
    printf("Informe int : \n");
    scanf("%d", &n);
    printf("Informe double : \n");
    scanf("%lf", &x);
    for(i = 0; i < n; i++ )
    {
        z = z + ( ( pow(-1.0 , i)*pow(x, (2.0*i)) ) / (fat(2*i)) ); 

    }
        printf("\n\ncos(x) = %lf\n", z );
    return 0;
}