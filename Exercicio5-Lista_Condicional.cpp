// Fa�a um algoritmo que, dados 3 n�meros inteiros A, B e C, apresente qual dos 3 � o maior e qual � o menor.
#include <stdio.h>

int main(){

	int a, b, c;

	printf("Digite o valor de A: ");
	scanf("%d", &a);

	printf("Digite o valor de B: ");
	scanf("%d", &b);

	printf("Digite o valor de C: ");
	scanf("%d", &c);

	if(a < b && a < c)
	{
		printf("\nO menor eh A"); 
		}
	else if (b <= a && b < c) 
	{
		printf("\nO menor eh B"); 
		}
	else 
	{
		printf("\nO menor eh C"); 
		}
	if (a > b && a > c)
	{
		printf("\nO maior eh A"); 
		}
	else if ( b > a && b > c)
	{
		printf("\nO maior eh B"); 
		}
	else 
	{
		printf("\nO maior eh C"); 
		}

	return 0; }