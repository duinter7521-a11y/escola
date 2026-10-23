#include <stdio.h>
#include <string.h>
int main()
{
	char c_lube[3];
	printf("Digita as iniciais dos 4  grandes clubes de futebol de portugal:");
	scanf("%s",c_lube);
	if ((strcmp(c_lube,"FCP")==0)||(strcmp(c_lube,"fcp")==0))
		printf("Futebol Clube do Porto");
	else if ((strcmp(c_lube,"SLB")==0)||(strcmp(c_lube,"slb")==0))
		printf("Sport Clube Benfica");
	else if ((strcmp(c_lube,"SCP")==0)||(strcmp(c_lube,"scp")==0))
		printf("Sporting Clube Portugal");
	else if ((strcmp(c_lube,"SCB")==0)||(strcmp(c_lube,"scb")==0))
		printf("Sporting Clube Braga");
	else
		printf("Erro");
	return 0;
}
