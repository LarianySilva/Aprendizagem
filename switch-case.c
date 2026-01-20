#include <stdio.h>

int main(){
    /*o swtchi-case é como se fosse uma sequência de condicionais,sendo util para  comparar so uma variavel,servindo para comparações de igualdade,
    
    */
int a;

printf("Insira um valor de 1 a 5:\n");
scanf("%d", &a);

switch(a){
    case 1:
    printf("Su flor es la tulipa.\n ");
    break;
    // interrompe a execução do bloco switch após um case ser correspondido 
    case 2:
    printf("Su flor es la roseta.\n ");
    break;
    case 3:
    printf("Su flor es la girasol.\n ");
    break;
    case 4:
    printf("Su flor es la petunia.\n ");
    break;
    case 5:
    printf("Su flor es la cravo.\n ");
    break;
    // caso não seja digitado um número no intervalo ou nenhum:
    default:
    printf("Inválido.\n");
    break;
}

}