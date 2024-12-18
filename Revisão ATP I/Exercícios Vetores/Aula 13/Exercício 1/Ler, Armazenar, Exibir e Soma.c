#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Ler e armazenar elementos em um vetor.
Em seguida, exibir o vetor e a soma.*/

int main (){
setlocale(LC_ALL, "Portuguese");
int x[11], i = 0, valores, soma = 0, xx;
    for (i = 0; i < 11; i++){
        printf("Digite os valores do vetor %d: ", i);
        scanf("%d", &xx);
        soma = soma + xx;
        x[i] = xx;
    }
    for (i = 0; i < 11; i++){
        printf("\nValores do vetor número %d: %d", i, x[i]);
    }
    printf("\nSoma dos valores dentro do vetor: %d\n", soma);

return 0;
}
/* Dúvidas:
 - Por quê, na linha 15, não daria pra por, no lugar da variável xx, o x[i] ou simplesmente x?

 */
