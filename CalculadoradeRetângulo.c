#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float altura;

    printf("---- Calculadora de Area de Retangulos ----");

    printf("\nDigite o valor da Base: ");
    scanf("%f", &base);

    printf("\nDigite o valor da Altura: ");
    scanf("%f", &altura);

    int resultado = base * altura;
    printf("\nO tamanho da area do retangulo e: %d", resultado);

    return 0;
}
