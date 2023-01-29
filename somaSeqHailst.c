# include < stdio.h >
# include < stdbool.h >

int  hailstoneSequence ( int n){
    soma int ;
    soma = n;
    enquanto (n> 1 ){

        se (n> 1 ){
            se (n% 2 == 0 ){
                n=n/ 2 ;
                soma+=n;
            }
            outra coisa {
                n= 3 *n+ 1 ;
                soma+=n;
            }

        }
        outra coisa {
            quebrar ;
        }
    }
    soma de retorno;
}

int  principal ( vazio ){
    int granizo, n;
    printf ( " Insira o valor como deseja encontrar a soma dos resultados da soma do granizo: " );
    scanf ( " %d " , &n);
    granizo = granizoSequência (n);
    printf ( " O valor da soma é %d " , granizo);
    retorna  0 ;


}