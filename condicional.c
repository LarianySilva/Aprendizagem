#include <stdio.h>

int main(){
    /*
    será utilizados os operadores relaconais, atenção aos que muda:
    - menor igual :<=;
    - maior igual :>=
    - igual: ==;(comparação)
    - diferente: !=;
    */

    float n;

    printf("Insira a nota :\n");
    scanf("%f", &n);

    /*
    operadores logicos
    conjução : tudo é verdade (&&) e;
    disjunção(ou): será verdade com pelo menos 1 verdadeiro(||);
    inversão: é verdade quando o operando for falso(!);
    */
    if(n >= 4.0 && n < 7.0){
        printf("Aprovado");3
    }else{
        // caso a condição do if não seja atentida
        printf("Aluno reprovado");
    }
}