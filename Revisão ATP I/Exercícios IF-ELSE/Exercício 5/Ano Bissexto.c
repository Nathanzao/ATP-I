#include <stdio.h>
#include <locale.h>

//5) Faça um programa para identificar se um determinado ano fornecido pelo
//usuário é bissexto. Para tanto, verifique com a seguintes regras:
// Um ano é bissexto se for divisível por 400 ou
// Um ano é bissexto se for divisível por 4 e não for divisível por 100.
//Exemplos: 1600, 1988, 1992, 1996, 2000, 2004, 2008, 2012, 2016.

main (){
setlocale(LC_ALL, "Portuguese");
int ano;
    printf("Digite o ano desejado: ");
    scanf("%d", &ano);
    if (ano % 400 == 0){
        printf("Este ano e bissexto.");
    }else{
    if (ano % 4 == 0 && ano % 100 >= 0){
        printf("Este ano e bissexto.");
    }else{
        printf("Esse ano nao e bissexto.");
    }
    }
return 0;
}
