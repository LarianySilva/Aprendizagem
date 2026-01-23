#include <stdio.h>

int main(){
    /*
    while - laço de repetição.
    lemrar de inicializar a(s) variavel(is);
    se ater a condição de parada;
    atenção com loop.
    */

    int i = 1;             //inicializou a variavel,

   /* while(i <= 20){        //comparação com o valor,
        printf("%d ," , i); //i impresso,
        i++;               //vai somar 1 unidade à i,
    }  
        */                    // nisso o bloco de comando vai se repetir até que chegue a 20.
    //-----------------------------------------------------

    /*
    do-while - similar ao while no  quesito de inicialização,condição e atualização. Entretanto, a condição será avaliada somente no final do comando que tem de ser executado ao menos uma vez.
    */

    //Vamos usar a mesma variavel usada no while:

    do{                     //inicio da execução do comando
        printf("%d ", i);
        i++;
    }while(i <= 24);        //questionamento se a variavel atualizada atende a função.
}