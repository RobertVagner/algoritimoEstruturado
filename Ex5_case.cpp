#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int COD; //código do funcionário
	float SA; //salário atual
	float VA,NS; //valor do aumento e novo salário
	printf("Entre com o código:");
	scanf("%d",&COD);
	printf("Entre com o salário atual:");
	scanf("%f",&SA);
	
	switch (COD)
	{
		case 1:
			printf("Secretário\n");
			VA = SA * 0.35;
			break;
		case 2:
			printf("Caixa\n");
			VA = SA * 0.2;
			break;
		case 3:
			printf("Gerente\n");
			VA = SA * 0.1;
			break;
		case 4:
			printf("Diretor\n");
			VA = 0;
			break;
		default:
			printf("Código inválido!\n");
	}
	NS = SA + VA;
	printf("Valor do aumento:%10.2f\n",VA);
	printf("Novo salário....:%10.2f\n",NS);
	return 0;
}
