/*Fa�a um algoritmo que simule um caixa eletr�nico. O usu�rio
informa o valor que deseja sacar, o caixa eletr�nico verifica se o
valor � menor que o saldo dispon�vel e se, o valor � inferior ao
saldo, informa que o saque ser� liberado, enquanto que, se o
valor for maior que o saldo, informar ao usu�rio que o saque
excedeu o saldo na conta. Assuma um saldo de $10.000,00 de
saldo dispon�vel para o saque.*/
#include <stdio.h>
	int main(){
	double saldo;
	printf("Caixa eletronico\n");
	printf("\nInforme o valor que deseja sacar: ");
	scanf("%lf", &saldo);
		if (saldo >1000000){
		printf("\nSaque indisponivel por falta de saldo"); }
			else if (saldo<=1000000){
			printf("\nSaque liberado"); }
	return 0; }
