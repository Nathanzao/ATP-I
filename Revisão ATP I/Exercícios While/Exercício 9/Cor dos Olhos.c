#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa que receba a idade e a cor dos olhos das pessoas (A
– Azul, P – Preto, V – verde, C – castanho, O – outro). A quantidade de
pessoas deverá ser lida do usuário. Indique ao final a quantidade de
pessoas para cada cor de olhos.*/


int main (){
setlocale(LC_ALL, "Portuguese");
int x, a = 0, p = 0, v = 0, c = 0, o = 0, cont = 0;
char cc;
    printf ("Quantidade de pesssoas para serem analisadas: ");
    scanf("%d", &x);
    while (cont < x){
        printf("Digite a cor dos olhos da pessoa %d, colocando a primeira letra, máiuscula, da cor: ", cont + 1);
        setbuf(stdin,NULL); //limpar o buffer.
        scanf("%c", &cc);
        switch (cc){
            case 'P':
                printf("Preto. Entendi!\n");
                p++;
                break;
            case 'A':
                printf("Azul. Entendi!\n");
                a++;
                break;
            case 'V':
                printf("Verde. Entendi!\n");
                v++;
                break;
            case 'C':
                printf("Castanho. Entendi!\n");
                c++;
                break;
            default:
                printf("Você tem outra cor de olho! Ou sua opção é inválida.\n");
                o++;
                break;
        }
        cont++;
    }
    printf("\nQuantidade de pessoas com olhos azuis: %d\n", a);
    printf("Quantidade de pessoas com olhos pretos: %d\n", p);
    printf("Quantidade de pessoas com olhos verdes: %d\n", v);
    printf("Quantidade de pessoas com olhos castanhos: %d\n", c);
    printf("Quantidade de pessoas com outras cores de olhos ou que digitaram errado: %d\n", o);

return 0;
}
