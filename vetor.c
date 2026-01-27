#include <stdio.h>

int main(){
    /*
    vetores - assim como variaveis simples,ele armazenará tbm,só que varios dados em um mesmo nome,usando o indice para se guiar.
    SINTAXE:
    <tipo><nome>[<tamanho>]

    ACESSO A UMA POSIÇÃO:
        <nome>[<indice>]
    */

    // float m ;

    // v[0] = 50;
    // v[1] = 40;
    // v[2] = 30;
    // v[3] = 20;
    // v[4] = 10;

    // m = (v[0]+v[1]+v[2]+v[3]+v[4])/5;

    // printf("Resultado: %f\n", m);

   // int v[5]={10,20,30,40,50};//vetor lista de inicialização;
   // int i; // irá fazer acesso as posições junto com o laço de repetição da mesma forma que a variável m nos comentários.
    // float s = 0;

    // for(i=0;i<5;i++){
    //     s += v[i];
        //nesse caso será avaliado se o indice de i é <5,enquanto for verdade o laço será executado.
    //}
   // printf("Resultado: %f\n", s/5);

   int v[5];
   int i;
   
   for(i=0;i<5;i++){
    printf("Insira um dado:\n");
    scanf("%d ",&v[i]);
   }
   printf("Dados inseridos:\n");
   for(i=0;i<5;i++){
    printf("%d ",v[i]);
   }
}