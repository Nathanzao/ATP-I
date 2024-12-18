#include <stdio.h>
#include <locale.h>

//6) Leia uma data e determine se ela é válida. Para tanto, verifique se o mês está
//entre 1 e 12, e se o dia existe naquele mês. Note que Fevereiro tem 29 dias em
//anos bissextos e 28 dias em anos não bissextos.

main (){
setlocale(LC_ALL, "Portuguese");
int dia, mes, ano;
    printf("Digite o ano desejado: ");
    scanf("%d", &ano);
    printf("Digite o mes desejado: ");
    scanf("%d", &mes);
    printf("Digite o dia desejado: ");
    scanf("%d", &dia);
    if (ano % 400 == 0 || ano % 4 == 0 && ano % 100 >= 0){
        if (mes == 2 && dia >= 1 && dia<= 29){
                printf("Data valida");
            }
    }else{
        if (mes == 2 && mes<= 12 && dia >= 1 && dia <= 28){
            printf("Data valida");
        }else{
            if (mes != 2 && mes >=1 && mes <= 12 && dia >=1 && dia <= 31){
                printf("Data valida");
            }else{
                printf("Data invalida");
            }
        }
    }

return 0;
}
