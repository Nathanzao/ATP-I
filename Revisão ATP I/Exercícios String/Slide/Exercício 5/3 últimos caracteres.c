#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Exibir os 3 últimos caracteres de uma
string.*/

int main (){
setlocale(LC_ALL, "Portuguese");
int i = 0, c;
char frase[50];
    printf("Digite a frase. Irá ser usado apenas os últimos três caracteres: ");
    gets(frase);
    while (frase[i] != '\0'){
        i++;
    }
    for (c = i - 3; c < i; c++){
        printf("Em ordem crescente, ou seja do último caracter ao primeiro, esse é o valor da alocação de memória %d e esse é o conteúdo: %c\n", c, frase[c]);
    }

return 0;
}
/* por quê, na linha do for (18), não daria pra usar, ao invés de c < i, usar c != '\0'?
*/
