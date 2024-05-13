#include <stdio.h>
#include <stdlib.h>

int main()
{
    int primeiroNumero;
    int segundoNumero;

    printf("---- Calculadora 2 numeros do WILL :)----");

    printf("\nDigite o Primeiro Numero: ");
    scanf("%d", &primeiroNumero);
    printf("\nDigite o Segundo Numero: ");
    scanf("%d", &segundoNumero);

    int soma = primeiroNumero + segundoNumero;
    int subtracao = primeiroNumero - segundoNumero;
    int multiplicacao = primeiroNumero * segundoNumero;
    int divisao = primeiroNumero / segundoNumero;


    printf("\nOs numeros escolhidos foram: %d e %d", primeiroNumero, segundoNumero);

    printf("\nSoma: %d", soma);
    printf("\nSubtracao: %d", subtracao);
    printf("\nMultiplicacao: %d", multiplicacao);
    printf("\nDivisao: %d", divisao);

}
