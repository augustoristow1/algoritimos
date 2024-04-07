#include <stdio.h>     // Para entrada e saída padrão (printf, scanf, etc.)
#include <stdlib.h>    // Para funções de alocação de memória dinâmica (malloc, free, etc.)
#include <math.h>      // Para funções matemáticas (sqrt, sin, cos, etc.)
#include <string.h>    // Para manipulação de strings (strcpy, strcat, strlen, etc.)
#include <ctype.h>     // Para funções de manipulação de caracteres (toupper, tolower, etc.)
#include <time.h>      // Para funções relacionadas ao tempo (time, clock, etc.)
#include <stdbool.h>   // Para usar o tipo de dado booleano (true, false)
#include <stddef.h>    // Para definições de tipos e macros comuns (NULL, size_t, etc.)
#include <stdint.h>    // Para tipos inteiros com tamanho específico (int8_t, uint16_t, etc.)




int main(){

    char nome[50];
    float preco;
    int quantidade;
    float total;


    printf("Qual mercadoria deseja comprar?");
    scanf("%s", &nome);

    printf("Qual o preço dessa mercadoria?");
    scanf("%f", &preco);

    printf("Qual a quantidade de mercadoria que deseja comprar?");
    scanf("%d", &quantidade);



    total = preco * quantidade;

    printf("Total a pagar pela mercadoria %s: R$ %.2f\n", nome, total);


    return 0;

}
