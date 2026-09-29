#include <stdio.h>

int main() 
{
    float t1,t2,t3, med;
    printf("Olá, aqui podes obter a media das temperaturas da tua zona\n");
    printf("Por favor introduz os valores de temperatura dos ultimos 3 dias\n");  
    scanf("%f %f %f",&t1 ,&t2 ,&t3);
    med=(t1 + t2 + t3) / 3;
    printf("A temperatura media dos ultimos 3 dias na tua zona é %f",med);
    return 0;
}
