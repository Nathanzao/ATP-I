#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*
Faça um programa para codificar uma frase contida em uma string. Para tanto, o código deve
adicionar um inteiro k ao caractere, isto é, ao código da tabela ASCII do caractere. Esse valor k é
fornecido pelo usuário, podendo assumir valores entre 1 e 10. Faça uma função para codificar, a qual
recebe uma string e o valor k como parâmetros. O programa também deve ter uma função para
decodificar, a qual recebe uma string codificada e o valor k. Exemplo:

Digite uma palavra: abacate
Valor k: 5
Palavra codificada: fgfhfyj

Digite uma palavra codificada: fgfhfyj
Valor k: 5
Palavra decodificada: abacate

*/

int main (){
setlocale(LC_ALL, "Portuguese");
char sss[50], uuu[50], ppp[50];
int k, kk, i = 0;
    printf("Digite o valor que irá ser a constante K: ");
    scanf("%d", &k);
    fflush(stdin);
    if (k >= 1 && k<= 10){
        printf("Digite a palavra a ser codificada: ");
        gets(sss);
        for (i = 0; i < strlen(sss) && sss[i] != '\0'; i++){
            sss[i] = sss[i] + k;
        }
        printf("Valor de K: %d\n", k);
        printf("Palavra decodificada: %s\n", sss);
    }else{
        printf("Valor de K tem que estar entre 1 e 10!");
    }
    printf("\nDigite o valor de K utilizado para decodificação: ");
    scanf("%d", &kk);
    fflush(stdin);
    if (kk >= 1 && kk <= 10){
        printf("Palavra codificada: ");
        gets(ppp);
        for (i = 0; i <= strlen(ppp) && ppp[i] != '\0'; i++){
            ppp[i] = ppp[i] - kk;
        }
        printf("Palavra descodificada: %s", ppp);
    }else{
        printf("O valor de K tem que estar entre 1 e 10!!");
    }
return 0;
}