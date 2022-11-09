/*Faça um algoritmo que simule um caixa eletrônico. O usuário
informa o valor que deseja sacar, o caixa eletrônico verifica se o
valor é menor que o saldo disponível e se, o valor é inferior ao
saldo, informa que o saque será liberado, enquanto que, se o
valor for maior que o saldo, informar ao usuário que o saque
excedeu o saldo na conta. Assuma um saldo de $10.000,00 de
saldo disponível para o saque.*/

#include <stdio.h>

double saldo;

int main()
{
printf("Caixa eletronico\n\nInforme o valor que deseja sacar: ");
	
scanf("%lf", &saldo);
	
if (saldo >1000000)
{
	printf("\nSaque indisponivel por falta de saldo"); 
}

else if (saldo<=1000000)
{
	printf("\nSaque liberado"); 
}

return 0; }
