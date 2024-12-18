#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/* O cardápio de uma lanchonete é dado pela tabela abaixo. Escreva um programa
que leia o código do item adquirido pelo consumidor e a quantidade, calculando
e mostrando o total a pagar. Não será necessário exibir o produto e o valor,
somente o valor final.*/

int main (){
setlocale(LC_ALL, "Portuguese");
int codigo, x;
    printf("Digite o código do item que deseja: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade do item que deseja: ");
    scanf("%d",&x);
    switch (codigo){
        case 100:
            printf("Cachorro quente em %d quantidades, com %dR$ a pagar.", x, x*7);
            break;
        case 101:
            printf("Bauru Simples em %d quantidades, com %dR$ a pagar.", x, x*5);
            break;
        case 102:
            printf("Hamburguer em %d quantidades, com %dR$ a pagar.", x, x*10);
            break;
        case 103:
            printf("Cheeseburguer com %d quantidades, com %dR$ a pagar.", x, x*12);
            break;
        case 104:
            printf("Refrigerante em %d quantidades, com %dR$ a pagar.", x, x*3);
            break;
    }

return 0;
}
