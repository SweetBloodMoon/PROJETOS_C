#include<stdio.h> 
//Biblioteca que deve ser Adicionada para Utilizar Printf e Scanf 
int main () // A onde o Programa irá começar a executar ( função main ) 
{
    int x;// Criar uma variavel inteiro x 
    printf("Hello World\n"); //printf é uma função que faz com que o que seja dito entre "" irá aparecer no console que irá executar o Programa
    printf("Digite um Número:\n"); // "\n" é similar do que apertar enter no teclado, oque virar depois será na próxima linha.
    scanf("%d", &x); //Escanea oque o  inteiro %d que usuario vai digitar e armazena no endereço x por isso o & antes de x
    printf("\nO numero que voce digitou foi %d", x);  // Printa o X na tela por meio do valor que está armazenado no x.

    return(0); //Programa retorna a 0 dizendo que foi concluido com sucesso.
    
}