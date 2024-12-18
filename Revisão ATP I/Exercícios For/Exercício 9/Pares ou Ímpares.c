#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Ler valores inteiros positivos do usuário até que o número 0 seja
fornecido. Ao final, apresentar a quantidade de números pares e ímpares. */

int main (){
setlocale(LC_ALL, "Portuguese");
int a, i, par = 0, impar = 0;
    for (i = 1; i <= 5; i++){
        printf("Digite os 5 valores: ");
        scanf("%d", &a);
        if (a % 2 == 0){
            par = par + 1;
        }else{
            impar = impar + 1;
        }
    }
    printf("Quantidade de ímpares: %d\n", impar);
    printf("Quantidade de pares: %d", par);

return 0;
}
