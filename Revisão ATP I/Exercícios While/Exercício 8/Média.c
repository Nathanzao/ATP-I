#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa para ler a média de N alunos. O valor de N será
fornecido pelo usuário e indica a quantidade de alunos. O seu programa
deve considerar médias entre 0 e 10, isto é, se o usuário digitar uma nota
fora desse intervalo, o programa deve avisar o usuário e aguardar a
inserção de uma nota dentro intervalo indicado.*/


int main (){
setlocale(LC_ALL, "Portuguese");
int x, cont = 0;
float nota1, media;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &x);
    while (cont < x){
        printf("Digite a média do aluno: ");
        scanf("%f", &nota1);
        while (nota1 < 0 || nota1 > 10){
            printf("Nota inválida. Digite uma nova: ");
            scanf("%f", &nota1);
        }
        media =  media + nota1;
        cont++;
    }
    printf("Soma das médias dos alunos: %f", media);

return 0;
}

//veja que na linha 22, não daria pra ser if ao invés de while. O if iria executar o comando uma única vez, mas caso você digite errado novamente, iria funcionar.N
