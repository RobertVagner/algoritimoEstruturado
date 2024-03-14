#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float X,Y,Z;//medidas
	
	printf("Entre com o lado X:");
	scanf("%f",&X);
	
	printf("Entre com o lado Y:");
	scanf("%f",&Y);
	
	printf("Entre com o lado Z:");
	scanf("%f",&Z);
	
	if (X>Y+Z or Y>X+Z or Z>X+Y)
		{
			printf("Não é um triângulo!");
		}
	else
	if (X==Y and Y==Z)
		{
			printf("É um triangulo equilátero!");
		}
	else
	if (X==Y or X==Z or Y==Z)
		{
			printf("É um triângulo isósceles!");
		}
	else 
	if(X!=Y!=Z)
		{
			printf("É um triângulo escaleno!");
		}
	else
	
	return 0;
}
