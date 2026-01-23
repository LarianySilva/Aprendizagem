#include <stdio.h>

int main(){
    /*
    for - também similiar ao while, porém com uma sintaxe "mais complexa" e comando com tudo embutido.

    Em sua sintaxe:
    for(<ini>;<cond>;<incr>){
    <bloco de comando>
    }
    ini. = se trata da inicialização da variavel;
    cond. = condição que será avaliada;
    incr. = incremento ,decremento ou atualização da variavel de controle.

    Basicamente na sua primeira execução será feita a inicialização da variavel, e nas seguintes será avaliada a condição,em seguida a execução do bloco de comando e atualização da variavel de controle,se repetindo ate que a condição seja falsa.
    */

    int i ;//sem necessidade de iniciar fora
    
    /*for(i = 0; i<=20;i++){
        printf("%d ", i);
    }
        */
    //-----------------------------------------------------------
    /*
    break - usado para encerrar uma sequência de repetições completamente;(tudo depois dele é ignorado)
    continue - vai encerrar a repetição atual, mas continuando na seguinte.
    */

    // for(i=1;i<=20;i++){
    //     printf("%d ", i);
    //     if(i==5){
    //         break;
    //     }
    // }
for(i=1;i<=20;i++){
        if(i==5){
            continue;
        }
        printf("%d ", i);

    }

}