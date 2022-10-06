/*Faça um programa que leia dois valores inteiros A e B se os
valores forem iguais deverá se somar os dois, caso contrário
multiplique A por B. Ao final de qualquer um dos cálculos deve-se
atribuir o resultado para uma variável C e mostrar seu conteúdo
na tela.*/
#include <stdio.h>
int main(){
	int a, b, c;
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	if (a == b){
    	c = a + b;
    	printf("\nSoma de A + B: %d", c); }
	else {
		c = a * b;
		printf("\nMultiplicacao de A e B: %d", c); }
	return 0; }
