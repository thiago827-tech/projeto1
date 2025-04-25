#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {
float n1, n2, n3, res;
char nome[50];
printf("\nBem vindo ao programa de teste para calcular a media de um aluno. Siga as instrucoes a seguir para ter uma boa experiencia. Primeiramente digite seu nome completo sem usar acentuacao e cedilha: \n");
fgets(nome, sizeof(nome), stdin);
nome[strcspn(nome, "\n")] = '\0';
printf("\nMuito bem, agora por favor digite o valor de sua primeira nota, caso nao seja um valor inteiro, utilize ponto ao inves de virgula para inserir os dados: \n ");
scanf("%f", &n1);
printf("\nDigite o valor da sua segunda nota seguindo as instrucoes mencionadas anteriormente: \n");
scanf("%f", &n2);
printf("\nDigite o valor da sua terceira nota seguindo as instrucoes mencionadas anteriormente: \n");
scanf("%f", &n3);
res = (n1+n2+n3) / 3;
if(res>=7){
printf("\n%s sua media foi %.1f e com isso voce esta aprovado!\n", nome, res );
}
if(res=5){
printf("\n%s sua media foi no limite e voce tera que fazer recuperacao. \n", nome);
}
else{
printf("\n%s voce foi reprovado.\n", nome);
}
return 0;
}