/*O IMC � �ndice de Massa Corporal � um crit�rio da Organiza��o
Mundial de Sa�de para dar uma indica��o sobre a condi��o de
peso de uma pessoa adulta. A f�rmula � IMC = peso / ( altura *
altura). Elabore um programa que leia o peso e a altura de um
adulto e mostre sua condi��o de acordo com a tabela abaixo: IMC
em adultos Condi��o:
a) Abaixo de 18,5 �Abaixo do peso�
b) Entre 18,5 e 25 �Peso normal�
c) Entre 25 e 30 �Acima do peso�
d) Acima de 30 �obeso� */
#include <stdio.h>
int main(){
	float altura, peso;
	printf("Digite a sua altura: ");
	scanf("%f", &altura);
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("\nSeu IMC: %.2f\n", peso / (altura * altura));
	if ( peso / (altura * altura) <18.5){
		printf("\nVoce esta abaixo do peso !"); }
		else if ( peso / (altura * altura)>18.5 && peso / (altura * altura)<25){
			printf("Seu peso esta normal"); }
			else if (peso / (altura * altura)>25 && peso / (altura * altura)< 30){
				printf("Voce esta acima do peso"); }
				else {
					printf("Voce esta obeso"); }
	return 0; }
