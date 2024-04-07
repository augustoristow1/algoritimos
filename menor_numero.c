#include <stdio.h>    
#include <stdlib.h>   
#include <math.h>      
#include <string.h>    
#include <ctype.h>     
#include <time.h>      
#include <stdbool.h>   
#include <stddef.h>    
#include <stdint.h> 

/* fazer um algoritimo que leia tres valores inteiros, determine e imprima o manor
*/

int main (){

int A, B, C;
printf("Entre com o primeiro número: ");
scanf("%d", &A);

printf("Entre com o segundo número: ");
scanf("%d", &B);

printf("Entre com o terceiro número: ");
scanf("%d", &C);

printf("Seus numeros são: %d, %d, %d\n", A, B, C);


if ((A < B) && (A < C)) {
        printf("O menor número é %d\n", A);
    } else if ((B < A) && (B < C)) {
        printf("O menor número é %d\n", B);
    } else {
        printf("O menor número é %d\n", C);
    }


}
