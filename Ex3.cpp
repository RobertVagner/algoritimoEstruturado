#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL,"");
	
	int HI,HF;//hora inicial e hora final
	int MI,MF;//minuto inicial e minuto final
	int HT,MT;//hora total e minuto total (duração do jogo)
	
	printf("Entre com a hora e minuto inicial:");
	scanf("%d %d",&HI,&MI);
	printf("Entre com a hora e minuto final:");
	scanf("%d %d",&HF,&MF);
	
	if (MF<MI)
	{
		MF = MF + 60;
		HF = HF - 1;
	}
	if (HF<HI)
	{
		HF = HF + 24;
	}
	
	HT = HF - HI;
	MT = MF - MI;
	
	printf("Duaração do jogo: %d h e %d min.\n",HT,MT);
	
	return 0;
}
