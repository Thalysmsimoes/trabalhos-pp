# include  < stdio.h >
# include  < stdbool.h >

bool  ehPrime ( int n);

int  principal ( vazio ) {
    int acumular, min, max;
    printf ( " Insira a sequencia    " );
    scanf ( " %d  %d " , &min, &max);
    for ( int j = min; j<=max; j++){
        if ( ehPrime (j)== verdadeiro ){
            acumular += j;
        }    
    }
    printf ( " o numero %d primo! " ,acumular);
}
bool  ehPrime ( int j){
    se (j== 0 ){
        retorna  falso ;
    }
    se (j== 1 ){
        retorna  falso ;
    }
    se (j== 2 ){
        retorna  verdadeiro ;
    }
    se (j% 2 == 0 ){
        retorna  falso ;
    }
    for ( int i= 2 ; i<j; i++){
        se (j%i== 0 ){
            retorna  falso ;
        }
    }
    retorna  verdadeiro ;
}