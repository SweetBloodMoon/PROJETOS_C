
#include<stdio.h>

int main() {
    int x; // Um inteiro
    float y; // Numero com ponto flutuante  4bytes
    double z; // Numero com ponto flutuante 8bytes
    char a; // Um caractere

    x = y = z = 2; // Todos serao igual a dois. Como o programa em C começa da esquerda para direito em operações de igualdade.
    printf("%d\t%f\t%f\n", x, y, z);
    a = 'b'; // Irá armazenar o Caractere b na variavél a.
    printf("%c\n", a); 
    printf("%d\n", a); // O Caractere é armazenado  em um valor inteiro oq permite fazer isso
    // Operações Matématicas também são possiveis
    x = y * y; // x = 2 . 2 O valor de X apesar de ser 2 não ira interferir nessa operação já que estamos atribuindo um novo valor a ela que no caso será 4
    printf("%d\n", x);
    z = x * x * 2.52; // Utilizando Float e Double quando não podemos utilizar inteiros 
    printf("%f\n", z);
    // Podemos deixar mais complexas 
    x = x*x + (x -1) * (x - 1); // x = 4*4 + (4 - 1) * (4 - 1) -> x = 16 + 3 * 3 -> x = 16 + 9 -> x = 25
    printf("%d\n", x); //Mais pra frente em funções vemos como é possivel fazer funções ou adiciona-las através de bibliotecas para auxiliar no programa.
    



    

 return(0);
}