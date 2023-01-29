# inclui  < math.h >
# include  < stdbool.h >
# include  < stdio.h >
# inclui  < string.h >

bool  isPrime ( int número) {
  if (número % 2 == 0 && número != 2 ) {
    retorna  falso ;
  }
  int divisões = 0 ;
  contador int = 2 ;
  while (contador < número) {
    if (número % contador++ == 0 ) {
      divisões++;
    }
    if (divisões >= 1 ) {
      retorna  falso ;
    }
  }

  retorna  verdadeiro ;
}

int  getPowSum (número int ) {
  char convertidoNum[ 60 ];
  sprintf (convertedNum, " %d " , número);

  int soma = 0 ;
  for ( int i = 0 ; i < strlen (convertedNum); i++) {
    int atual = convertidoNum[i] - ' 0 ' ;
    soma += pow (atual, 2 );
  }
  soma de retorno;
}

bool  isHappy ( int número) {
  int firstSum = getPowSum (número);
  if (primeiraSoma == 1 )
    retorna  verdadeiro ;
  outra coisa {
    int curIndex = 1 ;
    int currentNum = primeiraSoma;
    enquanto ( verdadeiro ) {
      int newSum = getPowSum (currentNum);
      if (novaSoma == 1 ) {
        retorna  verdadeiro ;
      } senão {
        if (curIndex >= 20 )
          retorna  falso ;
        currentNum = newSum;
        curIndex++;
      }
    }
  }
  retorna  falso ;
}

int  getHighestHappyPrime ( int número) {
  for ( int atual = número; atual > 0 ; atual--) {
    if ( isHappy (atual) && isPrime (atual)) {
      corrente de retorno ;
    }
  }

  retorna  0 ;
}


int  principal ( vazio ) {
  int n;
  printf ( " insira o valor que deseja testar: " );
  scanf ( " %d " , &n);
  int prime = getHighestHappyPrime (n);
  printf ( " o resultado é: %d " ,linha);
  retorna  0 ;
}