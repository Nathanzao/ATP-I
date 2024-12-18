#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Ler 5 valores do usuário e apresentar o maior valor, o menor valor, a
soma e a média dos valores.*/

int main (){
setlocale(LC_ALL, "Portuguese");
int i, a, b, c, d, e, menor, maior;
float media, soma;
    for (i = 1; i <= 5; i++){
        printf("Digite os valores: ");
        scanf("%d", &a);
    if (i == 1){
        maior = a;
        menor = a;
    }
    if (a > maior){
        maior = a;
    }
    if (a < menor){
        menor = a;
    }
    soma = soma + a;
    }
    media = soma / 5;
    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);
    printf("Soma: %f\n", soma);
    printf("Média: %f\n", media);
return 0;
}
