#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    puts(setlocale(LC_ALL,"Portuguese"));

    checar_numero();

    return 0;
    }

//Criar função
int numero_inicial, numero_final, pares = 0;
int checar_numero(int i){//definição da função

printf("Digite o valor inicial: ");
scanf("%d", &numero_inicial);
printf("Digite o valor final: ");
scanf("%d", &numero_final);

for (i = numero_inicial; i <= numero_final; i++) {
            if(i%2==0){
                printf("\n%d é um número PAR.", i);
                pares = pares + 1;
}
            else{
                printf("\n%d é um número ÍMPAR.", i);
    }

}
printf("\nHá %d números pares, no total.", pares);
}
