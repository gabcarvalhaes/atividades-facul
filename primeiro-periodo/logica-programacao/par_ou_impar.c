#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main()
{
    puts(setlocale(LC_ALL,"Portuguese"));

    checar_numero();

    return 0;
    }

//Criar fun��o
int numero_inicial, numero_final, pares = 0;
int checar_numero(int i){//defini��o da fun��o

printf("Digite o valor inicial: ");
scanf("%d", &numero_inicial);
printf("Digite o valor final: ");
scanf("%d", &numero_final);

for (i = numero_inicial; i <= numero_final; i++) {
            if(i%2==0){
                printf("\n%d � um n�mero PAR.", i);
                pares = pares + 1;
}
            else{
                printf("\n%d � um n�mero �MPAR.", i);
    }

}
printf("\nH� %d n�meros pares, no total.", pares);
}
