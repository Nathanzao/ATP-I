#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Leia o c�digo de um determinado produto e mostre sua classifica��o. Utilize a
seguinte tabela como refer�ncia.*/

int main (){
setlocale(LC_ALL, "Portuguese");
int produto;
    printf("Digite o c�digo do produto: ");
    scanf("%d", &produto);
    switch (produto){
        case 1:
            printf("Alimento n�o-perec�vel.");
            break;
        case 2 ... 4:
            printf("Alimento perec�vel.");
            break;
        case 5 ... 6:
            printf("Vestu�rio.");
            break;
        case 7:
            printf("Higiene Pessoal.");
            break;
        case 8 ... 15:
            printf("Limpeza e Utens�lios Dom�sticos.");
            break;
        default:
            printf("Inv�lido.");
            break;
    }

return 0;
}
