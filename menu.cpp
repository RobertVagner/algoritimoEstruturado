#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
	int M[10][10];
	int I,J,NL,NC; //num. de linhas e colunas
	int OP; //opcão do usuário
	int S,N,C;
	
	setlocale(LC_ALL,"");
	do
	{
		system("CLS");
		printf("==============Matrizes==============\n");
		printf("1.Ler uma matriz\n");
		printf("2.Mostrar a matriz\n");
		printf("3.Alterar um valor\n");
		printf("4.Soma dos valores\n");
		printf("5.Somar uma coluna\n");
		printf("6.Somar um linha\n");
		printf("7.Multiplicar por uma constante\n");
		printf("8.Maior valor da matriz\n");
		printf("9.Soma da diagonal principal\n");
		printf("10.Sair\n");
		printf("=======================\n");
		printf("Opção:");
		scanf("%d",&OP);
		switch (OP)
		{
			case 1:
				printf("Entre com o número de linhas:");
				scanf("%d%*c",&NL);
				printf("Entre com o número de colunas:");
				scanf("%d%*c",&NC);
				printf("Lendo a matriz:\n");
				for (I=0;I<NL;I++)
				{
					for(J=0;J<NC;J++)
					{
						printf("M(%d,%d):",I,J);
						scanf("%d",&M[I][J]);
					}
				}
				break;
			case 2:
				printf("Matriz armazenada:\n");
				for(I=0;I<NL;I++)
				{
					for(J=0;J<NC;J++)
					{
						printf("%3d ",M[I][J]);
					}
					printf("\n");
				}
				system("pause");
				break;
			case 3:
				printf("Entre com a linha:");
				scanf("%d%*c",&I);
				printf("Entre com a coluna:");
				scanf("%d%*c",&J);
				printf("Entre com o novo valor:");
				scanf("%d%*c",&M[I][J]);
				break;
			case 4:
				S=0;
				for(I=0;I<NL;I++)
				{
					for(J=0;J<NC;J++)
					{
						S=S+M[I][J];
					}
				}
				printf("Soma dos valores= %d\n",S);
				system("pause");
				break;
			case 5:
				S=0;
				printf("Entre com a coluna:");
				scanf("%d%*c",&N);
				for(I=0;I<NL;I++)
				{
					for(J=NC-1;J<NC;J++)
					{
						S=S+M[I][N];
					}
				}
				printf("Soma dos valores= %d\n",S);
				system("pause");
				break;
			case 6:
				S=0;
				printf("Entre com a linha:");
				scanf("%d%*c",&N);
				for(I=NL-1;I<NL;I++)
				{
					for(J=0;J<NC;J++)
					{
						S=S+M[N][J];
					}
				}
				printf("Soma dos valores= %d\n",S);
				system("pause");
				break;
			case 7:
				printf("Entre com a constante:");
				scanf("%d%*c",&C);
				for (I=0;I<NL;I++)
				{
					for(J=0;J<NC;J++)
					{
						M[I][J] = M[I][J] * C;
					}
				}
				break;
			case 8:
				
				for(I=0;I<NL;I++)
				{
					for(J=0;J<NC;J++)
					{
						if(I==0 and J==0)
						{
							S=M[I][J];
						}
						else
							{
								if(M[I][J]>S)
								{
									S=M[I][J];
								}
							}
					}
				}
				printf("Maior valor da matriz: %d\n",S);
				system("pause");
				break;
			case 9:
				S=0;
				
				if(NL==NC)
				{
					for(I=0; I<NL; I++)
					{
						for(J=0; J<NC; J++)
						{
	            			if(I==J)
								{
	                				S=S+M[I][J];
	                			}
	                	}
					}
					printf("A soma da diagonal principal é %d\n", S);
	        		system("pause");
					break;
				}
				else
	            	printf("Impossível calcular!\n");
	            	system("pause");
		}
		
	} while (OP!=10);
	return 1;
}
