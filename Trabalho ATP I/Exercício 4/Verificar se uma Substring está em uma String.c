#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Fa�a uma fun��o para verificar e retornar se uma string est� contida em outra, ou seja, se uma
string � substring de outra. Utilize retorno do valor 0 para falso e valor 1 para verdadeiro. Exemplo:
Digite uma Palavra: abacate
Palavra de Busca: cat
Palavra de Busca esta na String

Digite uma Palavra: papagaio
Palavra de Busca: gio
Palavra de Busca nao esta na String

Digite uma Palavra: papagaio
Palavra de Busca: ioio
Palavra de Busca nao esta na String

Digite uma Palavra: batata
Palavra de Busca: aba
Palavra de Busca nao esta na String
*/

int buscar_string(char palavra[], char busca[]){
int i = 0, j = 0, flag = 0;
    for (i = 0; i < strlen(palavra); i++){
        if(busca[0] == palavra[i]){
            for (j = 1; j < strlen(busca); j++){
                if(palavra[i+j] != busca[j]){
                    break;
                }
            }
        }
        if (j == strlen(busca)){
            flag = 1;
    }
}
return flag;
}

int main (){
setlocale(LC_ALL, "Portuguese");
char sss[50], ss[50];
int verifica;
    printf("Digite uma palavra: ");
    gets(sss);
    printf("Digite a palavra de busca: ");
    gets(ss);
    buscar_string(sss, ss);
    verifica = buscar_string(sss, ss);
    if (verifica == 1){
        printf("Esta na String.");
    }else{
        printf("Nao esta na String.");
    }
}
