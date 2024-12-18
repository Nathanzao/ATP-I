#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*

Faça uma função para retornar a quantidade de vezes que uma string está contida em outra, ou seja,
quantas vezes a substring aparece em uma string. Exemplo:
Digite uma Palavra: 242544264542634524253454234
Palavra de Busca: 42
A Palavra de Busca ocorre 5 vez(es)

*/

void substring(char string[],char stringsub[]){
    int i = 0, j, saida = 0;
    while (i < strlen(string)){
        if (stringsub[0] == string[i]){
                for(j = 1; j < strlen(stringsub); j++){
                if(stringsub[j] != string[i+j]){
                    break;
                }

            }
            if (j == strlen(stringsub)){
                saida++;
            }

        }
    i++;
    }
    printf("Substring: %s", stringsub);
    printf("\nSubstring encontrada %d vez(es).", saida);
}

int main (){
setlocale(LC_ALL, "Portuguese");
char palavra[50], subpalavra[50];
    printf("Digite a palavra desejada: ");
    gets(palavra);
    printf("Digite a substring desejada: ");
    gets(subpalavra);
    substring(palavra, subpalavra);

return 0;
}
