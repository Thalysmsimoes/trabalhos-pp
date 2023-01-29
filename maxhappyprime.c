# include  < stdio.h >
# inclui < math.h >


int  principal ( vazio ){
    int min, max;
    teste de flutuação ;
    printf ( " insira o numero minimo ao maximo que deseja localizar todos os numeros completos: " );
    scanf ( " %d  %d " , &min, &max);
    for ( int i = min; i<=max; i++){
        teste = min% 2 ;
        if (teste> 0 ){
            printf ( "  %d  " ,min);
            min+= 1 ;
        }
        if (teste== 0 ){
            min+= 1 ;

        }



    }
    retorna  0 ;
}