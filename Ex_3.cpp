#include <stdio.h>


int main()

{
	int AN,//ano de nascimento
		AA,//ano atual
		IA,//idade em anos
		IM,//idade em meses
		IS,//idade em semanas
		IDIAS;//idade em dias
		
	printf("Informe o ano de nascimento:");
	scanf("%d",&AN);
	
	printf("Informe o ano atual:");
	scanf("%d",&AA);
	
	IA=AA-AN;
	IM=IA*12;
	IS=IA*52;
	IDIAS=IA*12*30;
	
	printf("Idade em anos:%d\nIdade em meses:%d\nIdade em semanas:%d\nIdade em dias:%d\n",IA,IM,IS,IDIAS);
	
	
	return 0;
}
