#include <stdio.h>

int main(){
    int idade = 0;
    float altura = 0.0; 
    char letra;
    char algo;
 // memoria para salvar dados do tipo inteiro,valendo a partir de 0
 printf("Digite uma letra:\n");
 letra = getchar();
    // o getchar irá receber o retono da função
 
 printf("Digite um caractere\n");
 algo = getc(stdin);
 //pode ler de outras fontes,mas nesse caso é do teclado


    // printf("Valor da idade: %d.\n", idade);
    // %d se relaciona ao contéudo que tem salvo na memória da identidade idade

    // Importante sempre colocar esse printf para que o usuario saiba o que fazer, pode parecer obvio,mas é bom anotar :)
    printf("Digite uma idade ai meu nobre e um ano:\n");
    scanf("%d", &idade);
    // scanf("especificador de formato(%d)", &nome da variavel informada(idade)), logo até que o usuario digite conforme o formato que especificado
//-----------------------------------------------------------

// no caso de ser um tipo de variavel diferente é o melhor usar scanf separados para cada tipo

printf("Diginte uma altura:\n");
scanf("%f", &altura);

    printf("Supostamente a idade informada foi: %d.\n", idade);
    printf("Altura informada : %f.\n", altura);
    printf("Letra informada: %c\n", letra);
    printf("caractere informado: %c\n", algo);


// Informação importante: NÃO ESQUEÇA O ";" É CRUCIAL

}
