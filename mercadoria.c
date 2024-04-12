#include <stdio.h>     // Para entrada e saída padrão (printf, scanf, etc.)
#include <stdlib.h>    // Para funções de alocação de memória dinâmica (malloc, free, etc.)
#include <math.h>      // Para funções matemáticas (sqrt, sin, cos, etc.)
#include <string.h>    // Para manipulação de strings (strcpy, strcat, strlen, etc.)
#include <ctype.h>     // Para funções de manipulação de caracteres (toupper, tolower, etc.)
#include <time.h>      // Para funções relacionadas ao tempo (time, clock, etc.)
#include <stdbool.h>   // Para usar o tipo de dado booleano (true, false)
#include <stddef.h>    // Para definições de tipos e macros comuns (NULL, size_t, etc.)
#include <stdint.h>    // Para tipos inteiros com tamanho específico (int8_t, uint16_t, etc.)

/* %d: Inteiro decimal.
    %f: Número de ponto flutuante (float).
    %lf: Número de ponto flutuante de precisão dupla (double).
    %c: Caractere único.
    %s: Sequência de caracteres (string).
    %u: Inteiro decimal sem sinal.
    %ld: Inteiro longo decimal.
    %lu: Inteiro longo decimal sem sinal.
    %x: Inteiro hexadecimal.
    %o: Inteiro octal.
    %p: Ponteiro.
    %e, %E: Notação científica de ponto flutuante.
    %g, %G: Formato geral de ponto flutuante.
    %hd: Inteiro curto decimal.
*/      




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