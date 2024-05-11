#include <stdio.h>
#include <stdlib.h>

int main()
{
    double raio;
    const float PI = 3.14;
    printf("---- Calculadora de area de circulo ---- \n");

    printf("\nDigite o tamanho do RAIO do circulo:");
    scanf("%lf", &raio);

    double resultado = PI * (raio*raio);
    printf("\nA area do seu circulo e: %f", resultado);

    return 0;
}
