#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Escreva um programa para ler três valores inteiros e apresenta-los em ordem
crescente.*/

int main (){
setlocale(LC_ALL, "Portuguese");
int a, b, c;
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);
    printf("Digite o terceiro valor: ");
    scanf("%d", &c);
    if (a < b && b < c && a < c){
        printf("Ordem crescente: %d, %d, %d ", a, b, c);
    }

    if (a < b && c < b && a < c){
        printf("Ordem crescente: %d, %d, %d ", a, c, b);
    }

    if (a < b && c < b && c < a){
        printf("Ordem crescente: %d, %d, %d ", c, a, b);
    }

    if (b < a && a < c && b < c){
        printf("Ordem crescente: %d, %d, %d ", b, a, c);
    }

    if (b < a && c < a && c < b){
        printf("Ordem crescente: %d, %d, %d ", c, b, a);
    }

    if (c < a && a < b && c < b){
        printf("Ordem crescente: %d, %d, %d ", c, a, b);
    }

    if (c < b && b < a && c < a){
        printf("Ordem crescente: %d, %d, %d ", c, b, a);

    }

return 0;
}
