#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Exibir os 3 �ltimos caracteres de uma
string.*/

int main (){
setlocale(LC_ALL, "Portuguese");
int i = 0, c;
char frase[50];
    printf("Digite a frase. Ir� ser usado apenas os �ltimos tr�s caracteres: ");
    gets(frase);
    while (frase[i] != '\0'){
        i++;
    }
    for (c = i - 3; c < i; c++){
        printf("Em ordem crescente, ou seja do �ltimo caracter ao primeiro, esse � o valor da aloca��o de mem�ria %d e esse � o conte�do: %c\n", c, frase[c]);
    }

return 0;
}
/* por qu�, na linha do for (18), n�o daria pra usar, ao inv�s de c < i, usar c != '\0'?
*/
