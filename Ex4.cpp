#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int I, IM;
	
	printf("Informe a sua idade:");
	scanf("%d",&I);
	
	IM=5-I;
	
	if (I<5)
		{
			printf("Idade m�nima n�o alcan�ada, falta(m) %d ano(s) para entrar na categoria infantil!\n",IM);
		}
	else
		if (I<11)
			printf("Sua categoria � Infantil!");
		else
			if (I<17)
				printf("Sua categoria � Juvenil!");
			else
				if (I<31)
					printf("Sua categoria � Adulto!");
				else
					printf("Sua categoria � S�nior!");
	
	return 0;
}
