#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"");
	
	float S, //salario
	NS, //novo salário
	R, //reajuste 
	IR;//Indice de reajuste
	
	printf("Informe o Salário atual:");
	scanf("%f",&S);

	
	
	if(S>=0 and S<=800)
		{
			R = S * 10/100;
			NS = S + R;
			printf("Novo salário é de: R$ %.2f\n",NS);
			printf("Reajuste ganho: R$ %.2f\n",R);
			printf("Em percentual: 10%%\n");
		}
	else
	if(S>800 and S<=2000)
		{
			R = S * 7/100;
			NS = S + R;
			printf("Novo salário é de: R$ %.2f\n",NS);
			printf("Reajuste ganho: R$ %.2f\n",R);
			printf("Em percentual: 7%%\n");
		}
	else
		{
			R = S * 4/100;
			NS = S + R;
			printf("Novo salário é de: R$ %.2f\n",NS);
			printf("Reajuste ganho: R$ %.2f\n",R);
			printf("Em percentual: 48%%\n");
		}
	
	return 0;
}
