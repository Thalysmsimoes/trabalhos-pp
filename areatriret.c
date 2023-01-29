# include  < stdio.h >
# inclui  < math.h >

int  principal ( vazio ){
    flutuar xA, xB, yA, yB, S, R;
    printf ( " Insira os valores relativos de XA e YA: " );
    scanf ( " %f  %f " , &xA, &yA);
    printf ( " inserir os valores relativos de XB e YB: " );
    scanf ( " %f  %f " , &xB, &yB);
    S = (( pow (xA-xB, 2 ))+ ( pow (yA-yB, 2 )));
    se (S> 0 ){
        R = quadrado (S);
        printf ( " o resultado é %.2f " ,R);
    }
    outra coisa {
        printf ( " valor invalido " );
    }
    retorna  0 ;
}