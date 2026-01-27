#include<stdio.h>
#include<string.h>
#include<locale.h>

#define N 20

int main(){
setlocale(LC_ALL,"Portuguese");

char origem[N] = {"Olá, mundo!"};
char destino[N];

printf("Antes do strcpy:\n");
puts(origem);
puts(destino);

strcpy(destino, origem);

printf("Depois do strcpy:\n");
puts(origem);
puts(destino);

    /*
    entrada e saída:
    scanf("%<tam.-1>[^\n]s",<str>);

    printf -segue a normalidade;
    */

    // char s[15];
    
    // printf("Digite algo (scanf comum):\n");
    // scanf("%s",s);//ignorou tudo depois do espaço,mas caso não tenha pode acontecer de estrapolar além da string.
    // fflush(stdin);

    // printf("Resultado: %s\n\n",s);

    // printf("Digite algo (scanf diferente):\n");
    // scanf("%14[^\n]s",s);//limitou até o número especificado.
    // fflush(stdin);

    // printf("Resultado: %s\n\n",s);
    //---------------------------------------------------
    /*
    gets() - gets(<string>);
    fgets() - (<string>, <tam>, stdin);
    entrada padrão - stdin;
    puts() - puts(<string>){só string}
    fflush(stdin): chamar sempre que faz uma entrada de dados, afim de evitar que a proxima entrada dê problema;
    */
     
    // printf("Digite algo (scanf comum):\n");
    // scanf("%s",s);
    // fflush(stdin);//sem ele ele pega uma parte do dados de um scanf para outro.

    // printf("Digite algo (gets):\n");
    // gets(s);
    // fflush(stdin);

    // puts("Resultado:");
    // puts(s);
    // puts("");

    // printf("Digite algo (fgets):\n");
    // fgets(s, 10, stdin);
    // fflush(stdin);

    //  puts("Resultado:");
    // puts(s);

    /*
    biblioteca string.h 
    strcpy (<destino>, <origem>); - usado para alterar o contéudo de una string;
    strcat (<destino>, <origem>); - colar uma string a outra;
    strlen(<string>); - mostra o tamanho da string;
    strcmp(<string1,<string2>); - compara se  a str1 é estritamente igual a str2 ,retornando 0 caso verdadeiro;
----------------------------------------------------------
    biblioteca locale.h
    setlocale(LC_ALL,"Portuguese");
    permite o uso de acentos.
    */

}