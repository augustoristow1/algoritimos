/*
algoritimo que leia os catetos (ae b), e calcule e imprima o valor da hipotenusa
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


int main (){

int A, B, X, Z, H;

printf("Bem vindo a calculadora de hipotenusa\n");
printf("Entre com o valor do cateto A:");
scanf("%d", &A);
printf("entre com o valor do cateto B:");
scanf("%d", &B);


    H = sqrt(A * A + B * B); // Aplicando o teorema de Pitágoras

    printf("O valor da hipotenusa é de %d\n", H);



return 0;

}
