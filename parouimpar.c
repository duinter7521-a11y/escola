#include <stdio.h>

int main()
{
    int numero;
    printf("Olá, vamos descobrir se o teu número é par ou impar\n");
    printf("Introduz o teu número:");
    scanf("%d", &numero);
    int resto = numero % 2;
    if (resto==0)
        printf("O teu número é par");
    else
        printf("O teu número é impar");
}