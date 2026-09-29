#include <stdio.h>

int main() 
{
    int compr, larg, Area,per;

    printf("Saudaços, estas pronto para calcular a area e o perimetro do retangulo\n");
    printf("Introduz respetivamente o comprimento e largura do teu retangulo em cm\n");

    scanf("%d %d", &compr, &larg);

    Area=compr*larg;
    per=2*compr+2*larg;

    printf("O teu retangulo tem: %d cm² de area e %d cm de perimetro ",Area ,per);

    return 0;
}