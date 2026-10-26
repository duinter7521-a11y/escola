#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

int main()
{
	int escolha=18;
	while (escolha!=17){
		printf("Programa 1 - Somador (a+b)\n");
		printf("Programa 2 - Area e Perimetro\n");
		printf("Programa 3 - Media de 3 temperaturas 1-0\n");
		printf("PRograma 4 - Boas Vindas\n");
		printf("Programa 5 - Numero Par ou Impar\n");
		printf("Programa 6 - \n");

		scanf("%d",&escolha);
		switch (escolha){
			case 1: system("cls");
					int a,b,soma;
					printf("Digita 2 numeros que quiras somar:\n");
					scanf("%d %d",&a,&b);
					soma=a+b;
					printf("%d+%d=%d\n",a,b,soma);
					printf("O resultado é %d",soma);
					getchar();
					getchar();
					system("cls");
			break;
			case 2: system("cls");
					int compr, larg, area, perim;
					printf("Introduz respetivamente o comprimento e largura do teu retangulo em cm\n");
					scanf("%d %d", &compr, &larg);
					area=compr*larg;
					perim=2*compr+2*larg;
					printf("O teu retangulo tem: %d cm² de area e %d cm de perimetro ",area ,perim);
					getchar();
					getchar();
					system("cls");
			break;
			case 3: system("cls");
					float t1,t2,t3, med;
					printf("Olá, aqui podes obter a media das temperaturas da tua zona\n");
					printf("Por favor introduz os valores de temperatura dos ultimos 3 dias\n");  
					scanf("%f %f %f",&t1 ,&t2 ,&t3);
					med=(t1 + t2 + t3) / 3;
					printf("A temperatura media dos ultimos 3 dias na tua zona é %f",med);
					getchar();
					getchar();
					system("cls");
			break;
			case 4: system("cls");
					char nome[30];
					printf("Por favor introduza o seu primeiro nome:\n");
					scanf("%s", nome);
					printf("Bem vindo a nossa plataforma %s",nome);
					getchar();
					getchar();
					system("cls");
			break;
			case 5: system("cls");
					int numero;
					printf("Olá, vamos descobrir se o teu número é par ou impar\n");
					printf("Introduz o teu número:");
					scanf("%d", &numero);
					int resto = numero % 2;
					if (resto==0)
						printf("O teu número é par");
					else
						printf("O teu número é impar");
					getchar();
					getchar();
					system("cls");
			break;
			case 6: system("cls");
					float ao_quadra, resultado;
					printf("Vamos calcular o quandrado do teu numero\n");
					printf("Por favor introduz um numero positivo:");
					scanf("%f",&ao_quadra);
					resultado = pow(ao_quadra,2);
					printf("O quandrado do teu numero e:%f",resultado);
					getchar();
					getchar();
					system("cls");
			break;
		}
	}
	
	return 0;
}
