#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*10) Faça um programa que receba a idade, a altura e o peso de N
pessoas. O valor de N será fornecido pelo usuário e indica a quantidade de
pessoas. Após a leitura, indique:
• Quantas pessoas possuem idade superior a 50 anos;
• A média de altura das pessoas com idade entre 10 e 20 anos;
• Percentual de pessoas com peso inferior a 50 quilos.
*/

int main (){
setlocale(LC_ALL, "Portuguese");
int idade, x, cont = 0, i50 = 0, idade1020;
float altura, peso, p50, somaal1020, media;
    printf("Digite a quantidade de pessoas para serem analisadas: ");
    scanf("%d", &x);
    while (cont < x){
        printf("Dados da pessoa %d. \n", cont+1);
        printf("Digite a idade: ");
        setbuf(stdin,NULL);
        scanf("%d", &idade);
        printf("Digite a altura: ");
        setbuf(stdin,NULL);
        scanf("%f", &altura);
        printf("Digite o peso: ");
        setbuf(stdin,NULL);
        scanf("%f", &peso);
        if (idade > 50){
            i50 = i50 + 1;
        }
        if (idade >= 10 && idade <=20){
            idade1020++;
            somaal1020 = somaal1020 + altura;

        }
        if (peso < 50){
            p50 = (p50 + 1) / (x * 100);
        }
        cont++;
    }
    media = somaal1020 / idade1020;
    printf("Pessoas que tem idade superior a 50 anos: %d\n", i50);
    printf("Média de altura das pessoas com idade dentre 10 e 20 anos: %.2f\n", media);
    printf("Porcentagem de pessoas com peso inferior a 50 quilos: %.2f\n", p50);

return 0;
}
