#include <stdio.h>

int main() 
{
    char nome[30];
    printf("Por favor introduza o seu primeiro nome:\n");
    scanf("%s", nome);
    printf("Bem vindo a nossa plataforma %s",nome);
    return 0;
}