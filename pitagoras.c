/*
efetue a leitura de tres valores e apresente como resultado 
final o quadrado da soma dos tres valores
*/

#include <stdio.h>    
#include <stdlib.h>   
#include <math.h>      
#include <string.h>    
#include <ctype.h>     
#include <time.h>      
#include <stdbool.h>   
#include <stddef.h>    
#include <stdint.h>  

int main () {

int A, B, C, D, F;
printf("Bem vindo ao programa\n");

printf("Escolha o primeiro numero: ");
scanf("%d", &A);
printf("Escolha o segundo numero: ");
scanf("%d", &B);
printf("Escolha o terceiro numero: ");
scanf("%d", &C);

D = (A + B + C);
F = D * D;



printf("A soma dos numeros é: %d\n", D);
printf("O quadrado da soma é %d:\n", F);



 return 0;
}
