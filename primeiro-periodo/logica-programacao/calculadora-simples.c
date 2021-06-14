#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    puts(setlocale(LC_ALL,"Portuguese"));

    float primeiro_valor, segundo_valor;
    printf("Digite o primeiro valor: ");
    scanf("%f", &primeiro_valor);
    printf("Digite o segundo valor: ");
    scanf("%f", &segundo_valor);
    printf("Resultado da soma: %.02f\n", primeiro_valor + segundo_valor);
    printf("Resultado da subtração: %.02f\n", primeiro_valor - segundo_valor);
    printf("Resultado da multiplicação: %.02f\n", primeiro_valor * segundo_valor);
    printf("Resultado da divisão: %.02f\n", primeiro_valor / segundo_valor);

    return 0;
}
