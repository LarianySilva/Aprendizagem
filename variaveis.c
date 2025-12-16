#include <stdio.h>

#define texto "Entrada e saida de dados"

int main(){
    // Para constantes utiliza-se o #define
    // exemplo:
    // #define <nome> <valor>

     printf("%s\n", texto);

    /*
    tipos de dados mais comuns:
    -char: dados com caracteres alfanuméricos,popular para texto,(tabela ascii);
    -int : do tipo inteiro, em algumas arquiteturas é possível alocar 16 e em outras 32 bits para n° sem casas decimais;
    -float: dados com casas decimais;
    -double: dados mais especidos, com maiores casas decimais;
----------------------------------------------------------
*/

     int idade = 0;
     float altura = 0.0;
     char nome[50] = "";
    // no tipo char ,quando for armanezar dados ,é preciso dizer quantos caracteres cabem naquela variavel desse tipo, por isso o [50],essa é a quantidade de caracteres que cabem na variavel nome.

     printf("Digite uma idade:\n");
     scanf("%d", &idade);

     printf("Digite uma altura:\n");
     scanf("%f", &altura);

     printf("Digite um nome:\n");
     scanf("%s", nome);
    //  caso fosse um unico caractere seria %c

     printf("Dados informados:\n");
     printf("Idade: %d.\n", idade);
     printf("Altura: %.2f.\n", altura);
    //  apenas duas casas decimais
     printf("Nome: %s.\n", nome);
}