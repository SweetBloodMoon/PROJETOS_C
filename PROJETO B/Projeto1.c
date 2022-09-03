//Funções
//Iremos Utilizar o PROJETO 5A e diminuir o Código da Função Main
#include<stdio.h>
void Inicializar(char TabPS[]){ //Tabela Posição Simbolo
    for(int i = 0; i < 9; i++) //Adicionamos ao final do jogo para poder reniciar o jogo
    {
        TabPS[i] = '-';
        printf("%c\t", TabPS[i]);
    }
}
int Vencedor(char TabPS[], int P){
     switch (TabPS[P]) 
                    {
                    case 'X':
                        return 1; //Valor retornado caso seja X o vencedor
                        break; 
                    case 'O':
                        return 2; //Valor retornado caso seja O o vencedor 
                        break;
                } 
}

int main () { 
    char SIMB[9]; //Pense isso como 0[char] 1[char] 2[char] 3[char] 4[char] isso são posiçoes de memoria dentro de SIMB
    char SimE;
    char XO;
    int Velha;
    int Posc, PontX = 0, PontO = 0;
    printf("Posicao 0 a 8:\n0\t1\t2\n3\t4\t5\n6\t7\t8");
    printf("\nInicializando...");
    Inicializar(SIMB);
    //Como a gente n possui um mouse rodando um programa a gente tem que colocar posição na hora de fazer a escolha
    while(SimE != 'E') { //Uma estrutura diferente de DO/WHILE mas com mesmo proposito
        printf("\nDigite o Simbolo e a posicao de 0 a 8:\n");
        scanf("%c", &XO);
        while(XO != 'O'&& XO != 'X') {
            if(XO != 'O' && XO != 'X') 
                printf("\n(X) OU (O)\n");
                scanf("%c", &XO);
        }
        scanf("%d", &Posc);
            if(SIMB[Posc] == '-')
                SIMB[Posc] = XO;
            else{
                printf("\nPosicao ja definida\n");
            }
        //Imprimir a Tabela
        for(int i = 1; i < 10; i++){
            printf("%c\t", SIMB[i-1]);
            if((i%3) == 0)
                printf("\n");
        }
        
        /*  0 1 2 
            3 4 5
            6 7 8
        */
        //Verificar se possui um vencedor
        //Para maior desempenho vamos procurar uma lógica por trás dos vencedores do jogo da velha; 
        //Podemos definir um valor i que vai auxiliar na pesquisa, Podemos observar que possui apenas 6 valores que realmente
        //Podem ser utilizados para definir o jogo que são  0 1 2 3 4 6 isso vai ajudar pois oque iremos fazer só poderao ser com esses


            for(int i = 0; i < 7; i++){
                if(SIMB[i] != '-'){ //Nao dar erro para rodar enquanto todos estao com -
                if(SIMB[i] == SIMB[i+1] && SIMB[i+1] == SIMB[i+2]) { // Vitorias por Horizontais
                if(Vencedor(SIMB,i) == 1) { //Não foi pra diminuir mais sim para mostrar como o valor é retornado 
                    PontX++;
                  } else {
                    PontO++;
                  }
                printf("Pontos X\tPontos Y\n");
                printf("%d\t\t%d\n", PontX, PontO);
                Inicializar(SIMB); //Agora é possivel jogar mais de uma vez
                }
                else if(SIMB[i] == SIMB[i+3]&& SIMB[i+3] == SIMB[i+6]){
                  if(Vencedor(SIMB,i) == 1) {
                    PontX++;
                  } else {
                    PontO++;
                  }
                 printf("Pontos X\tPontos Y\n");
                printf("%d\t\t%d\n", PontX, PontO);
                Inicializar(SIMB);
                }
                else if(SIMB[0] == SIMB[4] && SIMB[4] == SIMB[8]){
                  if(Vencedor(SIMB,i) == 1) {
                    PontX++;
                  } else {
                    PontO++;
                  }
                 printf("Pontos X\tPontos Y\n");
                printf("%d\t\t%d\n", PontX, PontO); 
                Inicializar(SIMB);
                }
               
            }
            }
         Velha++;
        if(Velha == 9){
        printf("\n***VELHA***\n");
   
        }
    }
    return(0);
}


