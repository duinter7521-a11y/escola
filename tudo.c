#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <string.h>

int main()
{
	int escolha=0;
	while (escolha!=18){
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
		printf("Programa 15 - Identificador de Idade\n");
		printf("Programa 16 - Reconhecedor de Clubes (por iniciais)\n");
		printf("Programa 17 - Multiplicador de 10 numeros\n");
		printf("Programa 18 - Sair\n");
		
		scanf("%d",&escolha);
		switch (escolha){
			case 1: system("cls");
					int a,b,soma;
					printf("Digita 2 numeros que queiras somar:\n");
					scanf("%d %d",&a,&b);
					soma=a+b;
					printf("%d+%d=%d\n",a,b,soma);
					printf("O resultado e %d",soma);
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
					printf("O teu retangulo tem: %d cm2 de area e %d cm de perimetro ",area ,perim);
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
					scanf("%29s", nome);
					printf("Bem vindo a nossa plataforma %s",nome);
					getchar();
					getchar();
					system("cls");
			break;
			case 5: system("cls");
					int numero;
					printf("Ola, vamos descobrir se o teu numero e par ou impar\n");
					printf("Introduz o teu numero:");
					scanf("%d", &numero);
					int resto = numero % 2;
					if (resto==0)
						printf("O teu numero e par");
					else
						printf("O teu numero e impar");
					getchar();
					getchar();
					system("cls");
			break;
			case 6: system("cls");
					float ao_quadra, resultado;
					printf("Vamos calcular o quadrado do teu numero\n");
					printf("Por favor introduz um numero positivo:");
					scanf("%f",&ao_quadra);
					resultado = pow(ao_quadra,2);
					printf("O quadrado do teu numero e:%f",resultado);
					getchar();
					getchar();
					system("cls");
			break;
			case 7: system("cls");
					int triplo ,total;
					printf("Insere o numero para fazer o triplo:\n");
					scanf("%d",&triplo);
					total = 3*triplo;
					printf("O resultado e:%d",total);
					getchar();
					getchar();
					system("cls");
					
			break;
			case 8: system("cls");
					int cubo ,total_cubo;
					printf("Insere o numero para fazer o cubo:\n");
					scanf("%d",&cubo);
					total_cubo = pow(cubo,3);
					printf("O resultado e:%d",total_cubo);
					getchar();
					getchar();
					system("cls");
					
			break;
			case 9: system("cls");
					float area_base,altura,total_triangulo;
					printf("Introduz respetivamente a base e a altura do teu triangulo:\n");
					scanf("%f %f",&area_base,&altura);
					total_triangulo = (area_base*altura)/2;
					printf("O teu triangulo tem %f unidades de area (ua)",total_triangulo);
					getchar();
					getchar();
					system("cls");
					
			break;
			case 10: system("cls");
					 float peso,altura_imc,resultado_imc;
					 printf("Coloca por ordem respetiva o teu peso e a tua altura (metros):");
					 scanf("%f %f",&peso,&altura_imc);

					 if (altura_imc == 0)
					 	printf("O valor altura é invalido");
					else
					 	resultado_imc = peso/(pow(altura_imc,2));
						printf("O teu IMC e:%f",resultado_imc);
	
					 getchar();
					 getchar();
					 system("cls");
					 
			break;
			case 11: system("cls");
					 float primeiro,segundo;
					 printf("Introduz dois numeros:");
					 scanf("%f %f",&primeiro,&segundo);
					 if (primeiro>segundo)
						 printf("O %f e maior que o %f",primeiro,segundo);
					 else if (primeiro<segundo)
						 printf("O %f e maior que o %f",segundo,primeiro);
					 else 
						 printf("Os numeros sao iguais");
					 getchar();
					 getchar();
					 system("cls");
					 
			break;
			case 12:system("cls");
					int mes;
					printf("Introduz um numero de 1 a 12:");
					scanf("%d",&mes);
					switch (mes) {
						case 1:
							printf("Janeiro");
							break;
						case 2:
							printf("Fevereiro");
							break;
						case 3:
							printf("Marco");
							break;
						case 4:
							printf("Abril\n");
							break;
						case 5:
							printf("Maio\n");
							break;
						case 6:
							printf("Junho\n");
							break;
						case 7:
							printf("Julho\n");
							break;
						case 8:
							printf("Agosto\n");
							break;
						case 9:
							printf("Setembro\n");
							break;
						case 10:
							printf("Outubro\n");
							break;
						case 11:
							printf("Novembro\n");
							break;
						case 12:
							printf("Dezembro\n");
							break;
						default:
							printf("Numero invalido! Digite um numero entre 1 e 12.\n");
							break;
					}
					getchar();
					getchar();
					system("cls");
			break;
			case 13:system("cls");
					char op;
					float numero1, numero2, resultado_calc;
					int vef = 0;

					printf("Escreve a tua operacao de dois numeros (ex: 5 + 3): ");
					scanf("%f %c %f", &numero1, &op, &numero2);

					switch (op) {
						case '+':
							resultado_calc = numero1 + numero2;
							break;
						case '-':
							resultado_calc = numero1 - numero2;
							break;
						case '*':
							resultado_calc = numero1 * numero2;
							break;
						case '/':
							if (numero2 == 0) {
								vef = 1;
							} else {
								resultado_calc = numero1 / numero2;
							}
							break;
						default:
							vef = 1;
					}

					if (vef == 1) {
						printf("O resultado e invalido\n");
					} else {
						printf("O resultado e: %.2f\n", resultado_calc);
					}

					getchar();
					getchar();
					system("cls");
					 
			break;
			case 14:system("cls");
					int nota;
					printf("Digite a sua nota (0-20): ");
    				scanf("%d", &nota);

					switch (nota) {
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							printf("Classificacao: Muito Insuficiente\n");
							break;
						case 5:
						case 6:
						case 7:
						case 8:
						case 9:
							printf("Classificacao: Insuficiente\n");
							break;
						case 10:
						case 11:
						case 12:
						case 13:
						case 14:
							printf("Classificacao: Suficiente\n");
							break;
						case 15:
						case 16:
						case 17:
							printf("Classificacao: Bom\n");
							break;
						case 18:
						case 19:
						case 20:
							printf("Classificacao: Muito Bom\n");
							break;
						default:
							printf("Nota invalida! Digite um numero entre 0 e 20.\n");
					}
					 getchar();
					 getchar();
					 system("cls");
					 
			break;
			case 15:system("cls");
					int idade;
					printf("Digite a sua idade: ");
					scanf("%d", &idade);
					if (idade<0)
						printf("Idade Invalida");
					else if (idade>=18)
						printf("Tens 18 anos ou mais");
					else
						printf("Tens menos de 18 anos");
					 getchar();
					 getchar();
					 system("cls");
					 
			break;
			case 16:system("cls");
					char c_lube[4];
					printf("Digita as iniciais dos 4 grandes clubes de futebol de Portugal:");
					scanf("%3s",c_lube);
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
					 getchar();
					 getchar();
					 system("cls");
					 
			break;
			case 17:system("cls");
					float prod=1, valor;
					
					for (int i=1; i<=10; i++){
						printf("Introduza o %d numero:", i);
						scanf("%f",&valor);
						prod = prod * valor;
						printf("%f\n",prod);
					}
					 getchar();
					 getchar();
					 system("cls");
					 
			break;
			default: 
					 break;
		}
	}
	printf("A desligar ...");
	return 0;
}
