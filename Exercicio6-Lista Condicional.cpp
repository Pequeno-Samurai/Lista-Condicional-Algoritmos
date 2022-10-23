//Fa�a um programa que leia uma vari�vel e some 5 caso seja par ou some 8 caso seja �mpar, imprimir o resultado desta opera��o.

#include <stdio.h>

int main()
{
	int valor;

	printf("Digite um valor: ");
	scanf("%d", &valor);

	if (valor%2==0)
	{
		printf("%d", valor + 5); 
		}
	else 
	{
		printf("%d", valor + 8); 
		}

	return 0; }