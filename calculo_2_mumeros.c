#include <stdio.h>

int main()
{
    char op;
    float a, b, resultado;
    int vef = 0;

    printf("Escreve a tua operação de dois numeros (ex: 5 + 3): ");
    scanf("%f %c %f", &a, &op, &b);

    switch (op) {
        case '+':
            resultado = a + b;
            break;
        case '-':
            resultado = a - b;
            break;
        case '*':
            resultado = a * b;
            break;
        case '/':
            if (b == 0) {
                vef = 1;
            } else {
                resultado = a / b;
            }
            break;
        default:
            vef = 1;
    }

    if (vef == 1) {
        printf("O resultado é inválido\n");
    } else {
        printf("O resultado é: %.2f\n", resultado);
    }

    return 0;
}
