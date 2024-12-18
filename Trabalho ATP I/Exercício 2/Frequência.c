#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Faça um programa para ler uma string e exibir a frequência de cada caractere da string. Não é
necessário fazer funções. Exemplo:
Digite uma Palavra: papagaio
p : 2 ocorrencia(s)
a : 3 ocorrencia(s)
g : 1 ocorrencia(s)
i : 1 ocorrencia(s)
o : 1 ocorrencia(s)
*/

int main (){
setlocale(LC_ALL, "Portuguese");
char sss[50], ssss[50], arr[50], conta[50], u;
int i = 0,j, cont = 0, as;
    printf("Digite a String desejada: ");
    gets(sss);
    fflush(stdin);
    for (j = 0; j < strlen(sss); j++){
        if (sss[j] != '7'){
        u = sss[j];
        cont = 0;
        for (i = j; i < strlen(sss); i++){
        if (sss[i] == u){
            sss[i]= '7';
            cont++;
            }
        }
        printf("Letra %c repetida %d vezes.\n", u, cont);
        }

    }
return 0;
}
