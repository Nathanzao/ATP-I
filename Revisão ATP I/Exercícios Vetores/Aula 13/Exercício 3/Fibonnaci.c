#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Preencher um vetor com N elementos da
sequ�ncia de Fibonacci. Considere N>2. */

int main (){
setlocale(LC_ALL, "Portuguese");
int fb = 0, i, v[10], xx;
    v[0] = 0;
    v[1] = 1;
    printf("Digite a quantidade de valores da sequ�ncia de Fibonnaci para serem exibidos: ");
    scanf("%d", &xx);
    if (xx < 2){
        printf("O valor precisa ser maior que dois.");
    }else{
    for (i = 2; i <= xx; i++){
        fb = (v[i-1]) + (v[i-2]);
        v[i] = fb;
    }
    for (i = 0; i < xx; i++){
        printf("Valor no n�mero %d do vetor: %d\n", i, v[i]);
    }
    }

return 0;
}
/* D�vidas:
 - Perceba que na linha do for, a 19, seria negativo a sequ�ncia de Fibonnaci se n�o colocassemos i = 2.

 */
