//Faça um programa em C que leia os valores A, B, C e imprima na tela se a soma de A + B é menor que C.
#include <stdio.h>
int main(){
	int a, b, c;
	printf("Valor de A: ");
	scanf("%d", &a);
	printf("Valor de B: ");
	scanf("%d", &b);
	printf("Valor de c: ");
	scanf("%d", &c);
	if (a + b < c){
		printf("\nA soma de A + B eh menor que C"); }
	return 0; }
