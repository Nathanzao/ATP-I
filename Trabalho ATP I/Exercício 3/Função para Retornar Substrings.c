#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*

Faça uma função para retornar a substring de uma string pelo parâmetro da função (não usar return).
Para tanto, a função deve receber uma string de entrada, uma string de saída, a posição inicial e
posição final de onde serão copiados os caracteres da string de entrada. Exemplo de função
void substring(char str[], char strout[], int ini, int fim)

*/

void substring(char strdeclarada[], char stringdesejada [], int comeco, int finall){
    int j = 0;
    for (int i = 0; i < strlen(strdeclarada); i++){
    while (comeco < finall){
        stringdesejada[j] = strdeclarada[comeco];
        j++;
        comeco++;
        }
    }
    printf("Substring: %s", stringdesejada);
}

int main (){
setlocale(LC_ALL, "Portuguese");
char strdeclarada[50], stringdesejada[50];
int comeco, finall;
    printf("Digite a palavra desejada: ");
    gets(strdeclarada);
    printf("Digite de onde quer começar a copiar a String: ");
    scanf("%d", &comeco);
    fflush(stdin);
    printf("Digite até é onda é pra copiar da String: ");
    scanf("%d", &finall);
    fflush(stdin);
    substring(strdeclarada, stringdesejada, comeco, finall);


return 0;
}
