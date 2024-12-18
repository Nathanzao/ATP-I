#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Exibir os 3 primeiros caracteres de uma
string. */


int main (){
setlocale(LC_ALL, "Portuguese");
int i = 0;
char x[30];
    printf("Digite a palavra, para ser exibido seus três primeiros caracteres: ");
    gets(x);
    for (i = 0; x[i] != '\0'; i++){
        x[3] = '\0';
        printf("Valor do %d alocação de memória, para o conteúdo: %c", i, x[i]);
    }

return 0;
}
/* Por quê temos que usar o %c em:

    while (x[i] != '\0'){
        printf("Valor do %d ponto de alocação de memória: %s", i, x[i]);
        i++;
    }
    E por quê o x[3] = '\0'; tem que ta dentro do for?
*/
