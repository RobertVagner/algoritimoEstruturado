#include <stdio.h>

int main()

{
	float C,//celsius
		F;//Faherenheit
		
	printf("Informe a temperatura em celsius:");
	scanf("%f",&C);
	
	F=(C*1.8)+32;
	
	printf("A temperatura em Faherenheit e' de:%f",F);
	
	return 0;
}
