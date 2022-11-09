//Fa�a um programa em C que leia os valores A, B, C e imprima na tela se a soma de A + B � menor que C.

#include <stdio.h>

int a, b, c;

int main()
{
	printf("Valor de A: ");
	scanf("%d", &a);

	printf("Valor de B: ");
	scanf("%d", &b);

	printf("Valor de c: ");
	scanf("%d", &c);

	if (a + b < c)
	{
		printf("\nA soma de A + B eh menor que C"); 
		}

	return 0; }
