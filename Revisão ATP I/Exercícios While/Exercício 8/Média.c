#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

/*Fa�a um programa para ler a m�dia de N alunos. O valor de N ser�
fornecido pelo usu�rio e indica a quantidade de alunos. O seu programa
deve considerar m�dias entre 0 e 10, isto �, se o usu�rio digitar uma nota
fora desse intervalo, o programa deve avisar o usu�rio e aguardar a
inser��o de uma nota dentro intervalo indicado.*/


int main (){
setlocale(LC_ALL, "Portuguese");
int x, cont = 0;
float nota1, media;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &x);
    while (cont < x){
        printf("Digite a m�dia do aluno: ");
        scanf("%f", &nota1);
        while (nota1 < 0 || nota1 > 10){
            printf("Nota inv�lida. Digite uma nova: ");
            scanf("%f", &nota1);
        }
        media =  media + nota1;
        cont++;
    }
    printf("Soma das m�dias dos alunos: %f", media);

return 0;
}

//veja que na linha 22, n�o daria pra ser if ao inv�s de while. O if iria executar o comando uma �nica vez, mas caso voc� digite errado novamente, iria funcionar.N
