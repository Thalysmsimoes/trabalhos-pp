# include  < stdio.h >
# inclui  < math.h >

int  principal ( vazio ){
    int num;
    printf ( " digite um numero positivo que deseja encontrar todos os divisores dos numeros: " );
    scanf ( " %d " , &num);
    for ( int i = 1 ; i<=num; i++){
        if ((num%i)== 0 ){
            se (num==i){
                printf ( "  %d " , i);
            }
            outra coisa {
                printf ( "  %d , " , i);
            }
        }
    }
    retorna  0 ;
}