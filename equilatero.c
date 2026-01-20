/*
 Faça um programa que, dado três valores a, b e c, verifique se eles podem ser os comprimentos dos lados de um triângulo. Caso positivo, seu programa deve informar também se o triângulo é equilátero, isósceles ou escaleno. Caso contrário, seu programa deve escrever a mensagem “Não formam um triângulo”

*/
#include <stdio.h>

int main(){
    int e, f, g;

    printf("Digite 3 unidades:\n");
    scanf("%d%d%d", &e, &f, &g);

    if( e + f > g && e + g > f && f + g > e){
        printf("genial, tenemos un triangulo.\n");
        if( e == f && e == g ){
            printf("Equilatero.\n");}
        else
            if(e == f|| e == g || f == g)
            printf("Isoceles.\n");
        else
            printf("Escaleno.\n");
        }else
            printf("No tenemos um triangulo");
        
    }


