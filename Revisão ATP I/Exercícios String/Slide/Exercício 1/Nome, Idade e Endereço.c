#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Ler o nome, idade e endere�o de uma
pessoa. Em seguida, exibir na tela.*/

int main (){
setlocale(LC_ALL, "Portuguese");
char nome[40], endereco [50];
int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    fflush(stdin);
    printf("Digite seu nome: ");
    gets(nome);
    printf("Digite seu endere�o: ");
    gets (endereco);
    printf("Sua idade: %d\n", idade);
    printf("Seu endere�o: %s\n", endereco);
    printf("Seu nome: %s", nome);
return 0;
}
