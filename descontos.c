#include <stdio.h>
#include <conio.h>
#include <stdlib.h>  //bibliotecas
#include<math.h>
#include <locale.h>

int main()
{

	
	int op;
	float valor,total = 0;
	

    printf("Bem-vindo a calculadora de descontos\n");
    

	printf("Entre com a opção de do desconto (1- 4)\n");
	scanf("%d", &op);
	printf("entre com o valor da compra\n");
	scanf("%f", &valor);
		if(op==1)
		 { 
		total=valor*0.90;
		 }
			else if (op==2)
			 {
				total=valor*0.95;
			 }
				else if (op==3)
				 {
					total=valor;
				 }
					else if (op==4)
					{
						total=valor*1.05;
					}
						else
						{
							printf("entre com a opção de 1 -4\n");
						}
						
	printf("o total a pagar %2.f", total);
	getch();			
			
			
			
			
}
