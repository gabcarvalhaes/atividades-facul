#include<stdio.h>
#include<conio.h>
int main()
{
int primeiro_numero = 34, segundo_numero = 55, terceiro_numero, contador, numero;
numero = 5; // loop já vai printar o 34 e o 55
printf("\n%d %d", primeiro_numero, segundo_numero);
for(contador = 2; contador < numero; ++contador) //loop já vai começar de 2 porque já printou o 34 e o 55 antes
{
terceiro_numero = primeiro_numero + segundo_numero;
printf(" %d", terceiro_numero);
primeiro_numero = segundo_numero;
segundo_numero = terceiro_numero;
}
return 0;
}
