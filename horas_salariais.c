#include <stdio.h>
#include <string.h>
#include <math.h>


float main(){

char nome[50]; 
float   qh, vh, sal=0;

printf("entre com seu nome: ", nome);
scanf("%s", nome);

printf("Entre com as horas trabalhadas: ");
scanf("%f", &qh);

printf("Entre com o valor de uma hora de trabalho: ");
scanf("%f", &vh);

sal = 0;
sal = vh * qh;

printf("Nome: %s\n Total a receber:  %.2f\n", sal);
getchar();

}
