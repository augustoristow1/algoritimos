#include <stdio.h>    
#include <stdlib.h>   
#include <math.h>      
#include <string.h>    
#include <ctype.h>     
#include <time.h>      
#include <stdbool.h>   
#include <stddef.h>    
#include <stdint.h>  



#include <stdio.h>     // Para entrada e saída padrão (printf, scanf, etc.)
#include <stdlib.h>    // Para funções de alocação de memória dinâmica (malloc, free, etc.)
#include <math.h>      // Para funções matemáticas (sqrt, sin, cos, etc.)
#include <string.h>    // Para manipulação de strings (strcpy, strcat, strlen, etc.)
#include <ctype.h>     // Para funções de manipulação de caracteres (toupper, tolower, etc.)
#include <time.h>      // Para funções relacionadas ao tempo (time, clock, etc.)
#include <stdbool.h>   // Para usar o tipo de dado booleano (true, false)
#include <stddef.h>    // Para definições de tipos e macros comuns (NULL, size_t, etc.)
#include <stdint.h>    // Para tipos inteiros com tamanho específico (int8_t, uint16_t, etc.)




/* PARA ESCOLHER O MENOR ENTRE AS OPÇÕES

if ((A < B) && (A < C)) {
        printf("O menor número é %d\n", A);
    } else if ((B < A) && (B < C)) {
        printf("O menor número é %d\n", B);
    } else {
        printf("O menor número é %d\n", C);
    }

*/



%d: usado para formatar e/ou ler um número inteiro.
%f: usado para formatar e/ou ler um número de ponto flutuante.
%c: usado para formatar e/ou ler um caractere.
%s: usado para formatar e/ou ler uma string de caracteres.
%lf: usado para formatar e/ou ler um número de ponto flutuante de precisão dupla.
%u: usado para formatar e/ou ler um número inteiro sem sinal.
%x ou %X: usado para formatar e/ou ler um número inteiro em formato hexadecimal.
%o: usado para formatar e/ou ler um número inteiro em formato octal.
%p: usado para formatar um ponteiro.
