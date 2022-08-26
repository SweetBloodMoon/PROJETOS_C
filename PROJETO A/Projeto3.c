//If e For 
#include <stdio.h> 
//No projeto dois foi mencionado que o caractere é armazenado em um valor inteiro, agora vamos mostrar isso na prática

int main () { 
    char Letra;
    int Num;
    printf("Caractere\tNumero Correspondente\n");
    //for
    for (Letra = 'a'; Letra <= 'z'; Letra++) { //For é um comando de Loop ele finaliza quando oque foi dito na linha do meio for verdadeiro.
        printf("%c\t%d\n", Letra, Letra);       //o primeiro parametro informamos o valor inicial da variavel, segundo paramentro verifica se é verdadeiro ou falso, caso seja
                                                //verdadeiro, inicializa oque foi informado no terceiro parametro e roda o for. Após isso se repete outra vez até que de falso.
    }
    //if
    //O if ele é um comando muito simples verifica se oque for informado for verdadeiro, caso seja, irá ocorre oque foi descrito dentro do escopo dele.
    if(Letra == 'z') { // IMPORTANTE ( == Igualdade ) ( = Atribui )
        printf("\nnao sera impresso");
    }
    else {// Else é o oposto de If sendo ele o (se não)  
        printf("\nA Letra n eh igual a z pois assim que o for verifica que Letra e igual a z atribui +1 a ela, ou seja, a letra eh igual %c  ", Letra);
    }

    //Dito isso vamos programar agora um programa que pega os numeros pares e diz que eles sao pares ou impar
    for ( Num = 0; Num <= 1000; Num++) { // Esse Loop for irá adiconar valores ao NUM até o valor ser 1000
        if((Num % 2) == 0 ) { //OBS (NUM % 2 ) é o resto da divisao por dois. Exemplo se Num for igual a 2 -> 2 % 2 = 0 pois o resto da divisão será 0.
            printf("O numero %d eh Par\n", Num);
        } else {
            printf("O numero %d eh Impar\n", Num);
        }
    }

    

    return (0); 



}


