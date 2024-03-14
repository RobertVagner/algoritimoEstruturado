#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	int I,J;
	int NC; //número de cidades
	char CIDADE[20][15];
	int DIST[20][20];
	int X,Y; //X armazenará a cidade de origem e Y a cidade de destino
	
	setlocale(LC_ALL,"");
	
	FILE *arq=fopen("cidades.dat","r");
	fscanf(arq,"%d",&NC); //lendo o número de cidades do arquivo
	
	for (I=0;I<NC;I++) //lendo no nome de cada cidade armazenada
	{
		fscanf(arq,"%s",&CIDADE[I]);
	}
	
	for (I=0;I<NC;I++) //lendo as distancias entre as cidades
	{
		for (J=0;J<NC;J++)
		{
			fscanf(arq,"%d",&DIST[I][J]);
		}
	}
	//Menu de opções
	printf("=========================================\n");
	
	do
	{
		for (I=0;I<NC;I++) //Imprimindo no nome de cada cidade armazenada
			{
				printf("%d - %s\n", I, CIDADE[I]);
			}
		printf("\n=========================================\n");
		printf("-1 para sair\n");
		printf("=========================================\n");
		printf("Origem:");
		scanf("%d",&X);
		printf("Destino:");
		scanf("%d",&Y);		
		printf("Distância de %s até %s é igual a %d Km.\n", CIDADE[X], CIDADE[Y], DIST[X][Y]);
		system("Pause");
		system("CLS");
	} while (X!=-1);
	
	return 1;
}

