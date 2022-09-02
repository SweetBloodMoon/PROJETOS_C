//Projeto4.c
//Estrutura Do/While
//Para demostrar a Estrutura Do/While vamos fazer um projeto de uma urna
//Urna em C 
#include<stdio.h> 

int main () {
    int voto;
    int candidatos[5];//Iremos ver isso mas para frente mas pense que isso é igual a 0[int] 1[int] 2[int] 3[int] 4[int] que podemos acessar com a msm palavra
    printf("*****SIMULAÇÃO DE VOTOS*****\n");
    printf("**Digite -999 para encerrar a votacao**\n");
    for(int c = 0; c < 5; c++){
        candidatos[c] = 0; //inicializando os votos para 0.
    }
    /* Estrutura de repetição, o programa irá executar até que o voto seja igual a -999, enquanto não for continuará a execução
    dentro do bloco */
    do
    {
        printf("Digite o seu candidato:\t"); 
        scanf("%d", &voto);
        
        candidatos[voto]++;
    }while(voto != -999); // Aqui está a condição

    for(int c = 0; c<5; c++) {
        printf("%d\t%d\n", c, candidatos[c]);
    }
    


    return(0);
}
