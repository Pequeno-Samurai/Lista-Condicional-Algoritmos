//Encontrar o dobro de um n�mero caso ele seja positivo e o seu triplo caso seja negativo, imprimindo o resultado.

#include <stdio.h>

int num1;

int main()
{
	printf("Digite um numero inteiro: ");
	scanf("%d", &num1);

	if ( num1 >0)
	{
		printf("\nDobro: %d", num1 *2); 
		}

	else 
	{
		printf("Triplo: %d", num1 * 3); 
		}

return 0; }
