#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int COD; //c�digo do funcion�rio
	float SA; //sal�rio atual
	float VA,NS; //valor do aumento e novo sal�rio
	printf("Entre com o c�digo:");
	scanf("%d",&COD);
	printf("Entre com o sal�rio atual:");
	scanf("%f",&SA);
	
	switch (COD)
	{
		case 1:
			printf("Secret�rio\n");
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
			printf("C�digo inv�lido!\n");
	}
	NS = SA + VA;
	printf("Valor do aumento:%10.2f\n",VA);
	printf("Novo sal�rio....:%10.2f\n",NS);
	return 0;
}
