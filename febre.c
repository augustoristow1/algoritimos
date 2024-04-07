/* escreva um algoritimo que receba a temperatuda de uma pessoa
e emita uma mensagem se ela estiver com febre, sendo que a partir de 
37 graus é considerado febre
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

float T;

printf("Entre com o valor da temperatura: ");
scanf("%f", &T);

if (T > 37.0)
    printf("Você esta com febre!");
    else
    printf("Você não esta com febre!");

return 0;

}
