#include <stdio.h>
#include <stdlib.h>

/*
caractere de escape para pular linha -> \n
função de saída -> printf("");
*/
// int main(){
//     //  printf("\nQuando\n chegar o momento (..)\n\n");
// printf("\n-----------------------------------------\n");
// printf("1 - Logar 2- Cadastrar  3 - Impreimir");
// printf("\n-----------------------------------------\n");

// printf("\nValor retornado: %d", printf("bom dia")\n);
// // basicamente essa função irá retornar a quantidade de caracteres digitados no printf("") 

// /*
// system("pause")
// não é tão necessário,tendo em vista que dependendo do sistema utilizado ele pode não funcionar,no meu caso funcionou,mas fazendo para o caso de sistemas que não funciona:
// */
// // printf("\nPressione qualquer teclar para continuar.");
// // getchar();
// // essa parte no fim fará a leitura do caractere pressionada no terminal
//     return 0;

// }
int main(){
    printf("valor inteiro : %d.\n",10);
    printf("valor real: %f.\n", 3.14159265);
    printf("valor real com duas casas: %.2f.\n", 3.14159265);
    printf("Dado de texto: %c.\n", 'A');
    printf("Dado de texto: %s.\n", "Brasil");

    return 0;
}