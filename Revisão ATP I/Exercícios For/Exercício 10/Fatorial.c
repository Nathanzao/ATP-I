#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

//Ler um número e apresentar o seu fatorial.

int main (){
setlocale(LC_ALL, "Portuguese");
int n, i, fat;
    printf("Digite o valor para ser transformado em fatorial: ");
    scanf("%d", &n);
    if (n == 0){
        printf("0! = 1");
    }else{
    for (fat = 1; 1 < n; n = n - 1){
        fat = fat * n;
    }
    }
    if (n != 0){
        printf("Valor transformado em fatorial: %d", fat);
    }

return 0;
}
/* perceba oq o programa está fazendo na linha do for (13). Basicamente,
na primeira rodada, ele lê o fat = 1, o 1 < n, e passa para os comandos sem fazer nada com o incremento.
Depois, ele só lê primeiramente o incremento e depois já vai, com as modificações do incremento,
para a condição.

Assumimos como exemplo o n = 5. Ele vai, na primeira ida, ler o fat = 1, o 1 < 5, e partir para os comandos.
Vai ficar: fat = 1 * 5. Depois, ele vai ler o incremento e partir para a condição, ficando:
n = 5 - 1 e, portanto, na condição: 1 < 4. Na segunda ida, ele vai ler a condição e partir para os comandos.
Vai ficar: fat = 5 * 4. Depois, ele vai ler o incremento e partir novamente para a condição, ficando:
n = 4 - 1 e, portanto, na condição: 1 < 3. Assim irá ir repetindo até que o n = 1.*/
