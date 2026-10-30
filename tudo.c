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
		printf("Programa 6 - Quadrado do Input\n");
		printf("Programa 7 - Triplo do Input\n");
		printf("Programa 8 - Numero ao Cubo\n");
		printf("Programa 9 - Area do Triangulo\n");
		printf("Programa 10 - Calculadora IMC\n");
		printf("Programa 11 - Comparador de numeros\n");
		printf("Programa 12 - Numeros dos meses\n");
		printf("Programa 13 - Calculadora Lite\n");
		printf("Programa 14 - Reconhecedor de Notas Escolares\n");
		
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
					printf("Ola, aqui podes obter a media das temperaturas da tua zona\n");
					printf("Por favor introduz os valores de temperatura dos ultimos 3 dias\n");  
					scanf("%f %f %f",&t1 ,&t2 ,&t3);
					med=(t1 + t2 + t3) / 3;
					printf("A temperatura media dos ultimos 3 dias na tua zona e %f",med);
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
					printf("Ola, vamos descobrir se o teu número e par ou impar\n");
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
			case 7: system("cls");
					int triplo ,total;
					printf("Incere o numero para fazer o triplo:\n");
					scanf("%d",&triplo);
					total = 3*triplo;
					printf("O resultado e:%d",total);
					getchar();
					getchar();
					system("cls");
					
			break;
			case 8: system("cls");
					int cubo ,total_cubo;
					printf("Incere o numero para fazer o cubo:\n");
					scanf("%d",&cubo);
					total_cubo = pow(cubo,3);
					printf("O resdultado e:%d",total_cubo);
					getchar();
					getchar();
					system("cls");
					
			break;
			case 9: system("cls");
					int area_base,altura,total_triangulo;
					printf("Introduz respetivamente a area da base e a altura do teu triangulo:\n");
					scanf("%d %d",&area_base,&altura);
					total_triangulo = (area_base*altura)/2;
					printf("O teu triagulo tem %d unidades de area (ua)",total_triangulo);
					getchar();
					getchar();
					system("cls");
					
			break;
			case 10: system("cls");
					 float peso,altura_imc,resultado_imc;
					 printf("coloca por ordem respetiva o teu peso e a tua altura(metros):");
					 scanf("%f %f",&peso,&altura_imc);
					 resultado_imc = peso/(pow(altura_imc,2));
					 printf("O teu IMC é:%f",resultado_imc);
					 getchar();
					 getchar();
					 system("cls");
					 
			break;
			case 11: system("cls");
					 float primeiro,segundo;
					 printf("introduz dois numeros:");
					 scanf("%f %f",&primeiro,&segundo);
					 if (primeiro>segundo)
						 printf("O %f e maior que o %f",primeiro,segundo);
					 else if (primeiro<segundo)
						 printf("O %f e maior que o %f",segundo,primeiro);
					 else 
						 printf("Os numeros são iguais");
					 getchar();
					 getchar();
					 system("cls");
					 
			break;
		}
	}
	
	return 0;
}
