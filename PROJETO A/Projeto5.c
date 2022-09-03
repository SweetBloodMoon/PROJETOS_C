//Projeto 5
//Swicth 
//Para Finaliar o Projeto A vamos usar Switch e tudo oq foi mostrado no Projeto A
//Vamos criar um jogo da velha simples
#include <stdio.h> 

int main () { 
    char SIMB[9]; //Pense isso como 0[char] 1[char] 2[char] 3[char] 4[char] isso são posiçoes de memoria dentro de SIMB
    char SimE;
    char XO;
    int Velha;
    int Posc, PontX = 0, PontO = 0;
    printf("Posicao 0 a 8:\n0\t1\t2\n3\t4\t5\n6\t7\t8");
    printf("\nInicializando...");
    //Função Inicialiar
    for(int i = 0; i < 9; i++)
    {
        SIMB[i] = '-';
        printf("%c\t", SIMB[i]);
    }
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
                    switch (SIMB[i])
                    {
                    case 'X':
                        PontX++;
                        break; 
                    case 'O':
                        PontO++;
                        break;
                } 
                printf("Pontos X\tPontos Y\n");
                printf("%d\t\t%d\n", PontX, PontO);
                }
                else if(SIMB[i] == SIMB[i+3]&& SIMB[i+3] == SIMB[i+6]){
                     switch (SIMB[i])
                    {
                    case 'X':
                        PontX++;
                        break; 
                    case 'O':
                        PontO++;
                        break;
                } 
                 printf("Pontos X\tPontos Y\n");
                printf("%d\t\t%d\n", PontX, PontO);
                }
                else if(SIMB[0] == SIMB[4] && SIMB[4] == SIMB[8]){
                     switch (SIMB[i])
                    {
                    case 'X':
                        PontX++;
                        break; 
                    case 'O':
                        PontO++;
                        break;
                }
                 printf("Pontos X\tPontos Y\n");
                printf("%d\t\t%d\n", PontX, PontO); 
                }
               
            }
            }
   
        }
         Velha++;
        if(Velha == 9){
        printf("\n***VELHA***\n");
    
}

return(0);
}


