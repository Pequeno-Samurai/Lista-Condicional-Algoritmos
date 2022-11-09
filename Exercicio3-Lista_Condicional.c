/*Fa�a um programa que leia dois valores inteiros A e B se os
valores forem iguais dever� se somar os dois, caso contr�rio
multiplique A por B. Ao final de qualquer um dos c�lculos deve-se
atribuir o resultado para uma vari�vel C e mostrar seu conte�do
na tela.*/

#include <stdio.h>

int a, b, c;

int main()
{
	printf("Digite o valor de A: ");
	scanf("%d", &a);

	printf("Digite o valor de B: ");
	scanf("%d", &b);

	if (a == b)
	{
    	c = a + b;
    	printf("\nSoma de A + B: %d", c); 
		}
	else 
	{
		c = a * b;
		printf("\nMultiplicacao de A e B: %d", c); 
		}

return 0; }
