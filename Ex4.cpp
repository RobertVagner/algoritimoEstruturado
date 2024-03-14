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
			printf("Idade mínima não alcançada, falta(m) %d ano(s) para entrar na categoria infantil!\n",IM);
		}
	else
		if (I<11)
			printf("Sua categoria é Infantil!");
		else
			if (I<17)
				printf("Sua categoria é Juvenil!");
			else
				if (I<31)
					printf("Sua categoria é Adulto!");
				else
					printf("Sua categoria é Sênior!");
	
	return 0;
}
