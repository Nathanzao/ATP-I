#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*5) Escreva um programa para ler a idade de um nadador e classifica-lo conforme
a tabela a seguir. */


int main (){
setlocale(LC_ALL, "Portuguese");
int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    switch (idade){
        case 0 ... 4:
            printf("Não pode competir.");
            break;
        case 5 ... 7:
            printf("Infantil A: 5 a 7.");
            break;
        case 8 ... 10:
            printf("Infantil B: 8 a 10.");
            break;
        case 11 ... 13:
            printf("Juvenil A: 11 a 13.");
            break;
        case 14 ... 17:
            printf("Juvenil B: 14 a 17.");
            break;
        case 18 ... 200:
            printf("Adulto.");
            break;
    }

return 0;
}
