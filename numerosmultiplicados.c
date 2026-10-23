#include <stdio.h>

int main()
{
	float prod=1, valor;
	
	for (int i=1; i<=10; i++){
		scanf("%f",&valor);
		prod = prod * valor;
		printf("%f\n",prod);
	}
	printf("O programa terminou");
	return 0;
}
