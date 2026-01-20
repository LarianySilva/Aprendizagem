#include <stdio.h>

int main(){
  /* int A, B, soma, sub, mult, div;
   
   printf("Digite o primeiro valor:\n");
   scanf("%d", &A);
   printf("Digite o segundo valor:\n");
   scanf("%d", &B);

   soma = A + B;
   sub = A - B;
   mult = A * B;
   div = A / B;

   printf("Resultados:\n");
   printf("Soma: %d.\n", soma);
   printf("Sub.: %d.\n", sub);
   printf("Mult.: %d.\n", mult);
   printf("Div.: %d.\n", div);
*/
   // operadores de atribuição

   /*
   - incremento de uma unidade:++;
   - decremento de uma '"":--
   -"" generico:-=
   -incremento generico:+=
   -atribuição com mult.:*=
   - "" com div.:/=
   */
   int dado = 5;

   dado++;
  printf("Dado depois do incremento:%d.\n",dado); 

  dado--;
  printf("Dado depois do decremento :%d.\n",dado); 

  dado += 3;
  printf("Dado depois de soma 3 unidades :%d.\n",dado); 

  dado -= 4;
  printf("Dado depois de subtrair 4 unidades :%d.\n",dado); 

  dado *= 7;
  printf("Dado depois de multiplicar :%d.\n",dado); 

  /*
  Observação:mesmo parecendo uma informação obvia, o valor do dado vai mudando a cada operação, logo, se o dado é 5, foi somado um = 6, logo o dado agora vale 6, e se é subtraido 1 volta a ser 5 e assim por diante.
  */

}