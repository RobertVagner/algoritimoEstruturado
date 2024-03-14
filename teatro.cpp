#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	char R[5][8]={{'-','-','-','-','-','-','-','-'},
				  {'-','-','-','-','-','-','-','-'},
				  {'-','-','-','-','-','-','-','-'},
				  {'-','-','-','-','-','-','-','-'},
				  {'-','-','-','-','-','-','-','-'}};
				  
	int I,J,OP,F,NC;//f=fila,nc=numero da cadeira
	setlocale(LC_ALL,"");
	
	do{
		system("CLS");
		printf("===========================\n");
		printf("   "); //imprimindo tr�s espa�os antes dos n�meros das colunas
		
		for (I=1;I<=8;I++) //imprimindo os n�meros das colunas
			printf("%3d",I);
			
		for (I=0;I<5;I++) //imprimindo cada uma das fileiras
		{
			printf("\n%3d",I+1);
			for (J=0;J<8;J++) //imprimindo o estada de cada cadeira 
			{
				printf("%3c",R[I][J]);
			}		
		}
		printf("\n===========================");
		printf("\n(1)Reservar-(2)Liberar-(3)Sair");
		printf("\nOp��o:");
		scanf("%d",&OP);
		
		//desenvolver a partir desse ponto.
		switch (OP)
		{
			case 1:
				printf("Entre com a fila (1 � 5):");
				scanf("%d",&F);
				printf("Entre com o n�mero da cadeira (1 � 8):");
				scanf("%d",&NC);
				F=F-1;
				NC=NC-1;
				
				if(R[F][NC]=='-')
				{
					R[F][NC]='X';
					for (I=0;I<5;I++) //imprimindo cada uma das fileiras
					{
						printf("\n%3d",I);
						for (J=0;J<8;J++) //imprimindo o estada de cada cadeira 
						{
							printf("%3c",R[I][J]);
						}		
					}
				}
				else
				{
					printf("Local j� reservado!\n");
					printf("Tecle <enter> para continuar!\n");
					system("pause");
				}
				break;
			case 2:
				printf("Entre com a fila (1 � 5):");
				scanf("%d",&F);
				printf("Entre com o n�mero da cadeira (1 � 8):");
				scanf("%d",&NC);
				F=F-1;
				NC=NC-1;
				
				R[F][NC]='-';
				for (I=0;I<5;I++) //imprimindo cada uma das fileiras
				{
					printf("\n%3d",I);
					for (J=0;J<8;J++) //imprimindo o estada de cada cadeira 
					{
						printf("%3c",R[I][J]);
					}		
				}
				break;	
		}
		
	}while (OP!=3);
	return 1;
}
